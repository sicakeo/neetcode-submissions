class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int , int> map;
        int max_length = 0;
        for(int num : nums)
            map[num]++;

        for(int num : nums) {
            if(!map.count(num-1)) {
                int j = 1;
                int length = 1;
                while(map.count(num + j) && j < nums.size()) {
                    j++;
                    length++;
                }
                max_length = max(length, max_length);
            }            
        }

        return max_length;
    }
};
