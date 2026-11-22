class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        std::vector<int> s1_freq(26, 0); 
        std::vector<int> s2_freq(26, 0);
        int i = 0;
        int j = 0;

        // Build the initial window of size s1.size()
        while (i < s1.size()) {
            s1_freq[s1[i] - 'a']++;
            s2_freq[s2[i] - 'a']++;
            i++;
        }

        // Slide the window across the rest of s2
        while (i < s2.length()) {
            if (s1_freq == s2_freq)
                return true;
            s2_freq[s2[j++] - 'a']--;
            s2_freq[s2[i++] - 'a']++;
        }

        // Check the final window position
        return s1_freq == s2_freq;
    }
};