class Solution {
public:
    int characterReplacement(string s, int k) {
        int count[26] = {0};
        int l = 0, maxFreq = 0, maxLength = 0;

        for (int r = 0; r < s.size(); r++) {
            // 1. Add s[r] to the window's frequency table
            count[s[r] - 'A']++;
            
            // 2. Update the highest frequency of any single char in the window
            maxFreq = std::max(maxFreq, count[s[r] - 'A']);

            // 3. Window length is (r - l + 1). 
            // Replacements needed = (window length) - maxFreq.
            // If we need more than k replacements, shrink from the left.
            while ((r - l + 1) - maxFreq > k) {
                count[s[l] - 'A']--;
                l++;
            }

            // 4. Window is guaranteed valid here; update max length
            maxLength = std::max(maxLength, r - l + 1);
        }

        return maxLength;
    }
};