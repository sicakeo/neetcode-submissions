class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int, int> myMap;

        for(int num : nums){
            myMap[num]++;
        }

        for(int i = 0; i < nums.size(); i++){
            if(myMap[nums[i]] > 1)
                return true;
        }
        return false;
    }
};