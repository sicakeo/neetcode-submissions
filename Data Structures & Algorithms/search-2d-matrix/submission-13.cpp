class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int left = 0;
        int right = rows-1;
        int row_mid;

        while(left <= right) {
            row_mid = (left + right)/2;
            if(matrix[row_mid][0] > target) {
                right = row_mid-1;
            }
            else if(matrix[row_mid][cols-1] < target) {
                left = row_mid+1;
            }
            else
                break;
        }

        if(matrix[row_mid][0] == target)
            return true;

        left = 0;
        right = cols-1;
        int col_mid;

        while(left <= right) {
            col_mid = (left + right)/2;
            if(matrix[row_mid][col_mid] == target)
                return true;
            else if(matrix[row_mid][col_mid] > target) {
                right = col_mid-1;
            }
            else {
                left = col_mid+1;
            }
        }

        return false; 
    }
};
