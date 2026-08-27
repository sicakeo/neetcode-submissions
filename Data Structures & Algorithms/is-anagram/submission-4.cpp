class Solution {
public:
    bool isAnagram(string s, string t) {
        // std::sort(s.begin(),s.end());
        // std::sort(t.begin(),t.end());
        // return s == t ? true : false;
        std::unordered_map<char, int> set1;
        std::unordered_map<char, int> set2;
        
        for(char ch : s){
            set1[ch]++;
        }

        for(char ch : t){
            set2[ch]++;
        }

        return set1 == set2 ? true : false;
    }
};
