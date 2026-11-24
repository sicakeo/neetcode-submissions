class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<char> set;
        int l = 0, r = 0;
        int max = 0;
        while(r < s.size()) {
            while(set.find(s[r]) != set.end()) {
                set.erase(s[l]);
                l++;
            }
    
            set.insert(s[r]);
            max = std::max(max, r - l + 1);
            r++;
        }

        return max;
    }
};
