class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       
       unordered_set<int> intSet;
       for (int i = 0; i < nums.size(); i++){
                intSet.insert(nums[i]);
       }
       int longest = 0;
        for (int num : intSet){
            if (intSet.find(num-1) == intSet.end()){
                int currentNum = num;
                int current = 1;
                while (intSet.count(currentNum+1)){
                    currentNum++;
                    current++;
                }
                longest = max(current, longest);
            }
        }
        return longest;
        }
};
