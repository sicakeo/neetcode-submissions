class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int l = 0;
        int r = numbers.size()-1;
        
        while(l<r && l < numbers.size() && r > 0) {
            if(numbers[l] + numbers[r]< target) {
                l++;
            }
            else if(numbers[l] + numbers[r] > target) 
                r--;
            else if(numbers[l] + numbers[r] == target && l!=r)
                return{++l, ++r};
        }

        return {};
    }
};
