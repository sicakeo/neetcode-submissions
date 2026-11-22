class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
            return false;
        string window = "";
        std::vector<int> s1_freq(26, 0); 
        std::vector<int> s2_freq(26, 0);
        int i = 0;
        int j = 0;

        while(i < s1.size()) {
            s1_freq[s1[i] - 'a']++;
            s2_freq[s2[i] - 'a']++;
            i++;
        }

        // abc
        // lecabee
        if(s1_freq == s2_freq)
            return true;
        while(i < s2.length()) {
            s2_freq[s2[j++] - 'a']--;
            s2_freq[s2[i++] - 'a']++;
            if(s1_freq == s2_freq)
                return true;
        }

        return false;
    }
};
