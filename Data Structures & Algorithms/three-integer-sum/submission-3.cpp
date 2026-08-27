class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
   
        for(int i = 0; i<nums.size(); i++){
            if(i> 0 && nums[i] == nums[i-1]) continue;
            int first = i+1;
            int last = nums.size()-1;
            while(first < last){
                int sum =  nums[i] + nums[last] + nums[first];
                if(sum > 0)
                    last--;
                else if(sum < 0)
                    first++;
                else{
                    res.push_back({nums[i], nums[first], nums[last]});
                    first++;
                    last--;
                    while (first < last && nums[first] == nums[first-1])
                        first++;
                }
            }
        }
        return res;
    }
};
