class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numsNeed;
        for(int i = 0; i < nums.size(); i++){
            int val = target - nums[i];
            if(numsNeed.count(val)){
                return {numsNeed.at(val),i};
            }
            numsNeed.insert({nums[i],i});
           
        }
        return {};
    }
};
