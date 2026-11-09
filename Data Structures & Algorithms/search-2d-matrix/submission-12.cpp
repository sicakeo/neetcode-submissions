class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix[0].size();
        int cols = matrix.size();

        int col_l = 0;
        int col_r = cols - 1;
        int col_m;

        while(col_l <= col_r) {
            col_m = (col_r + col_l)/2;
            if(matrix[col_m][0] > target)
                col_r = col_m - 1;
            else if(matrix[col_m][rows - 1] < target)
                col_l = col_m + 1;
            else
                break;
        }

        if (col_r < 0) return false;

        int row_l = 0;
        int row_r = rows - 1;
        int row_m;

        while(row_l <= row_r) {
            row_m = (row_r + row_l)/2;
            if(matrix[col_m][row_m] < target)
                row_l = row_m + 1;
            else if(matrix[col_m][row_m] > target)
                row_r = row_m - 1;
            else
                return true;
        }

        return false;
    }
};
