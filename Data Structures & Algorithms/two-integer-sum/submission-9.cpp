class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> map;

        for(int j = 0; j < nums.size(); j++){
            int res = target - nums[j];
            if(map.count(res))
                return{map[res], j};
            else
                map.insert({nums[j],j});
        }
        return {};
    }
};
