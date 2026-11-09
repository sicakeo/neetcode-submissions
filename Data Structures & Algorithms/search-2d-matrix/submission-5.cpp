class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix[0].size(); // (Actually number of columns)
        int cols = matrix.size();    // (Actually number of rows)

        int col_l = 0;
        int col_r = cols - 1;
        int colMid;
        while (col_l <= col_r) {
            colMid = (col_l + col_r) / 2;
            if (matrix[colMid][0] > target) {
                col_r = colMid - 1;
            } else if (matrix[colMid][rows - 1] < target) { // Check the LAST element of the row
                col_l = colMid + 1;
            } else {
                // target is between the start and end of colMid!
                break; // Now colMid is guaranteed to be the exact row!
            }
        }

        // FIX 1: If target is smaller than matrix[0][0], col_r will be -1
        if (col_r < 0) return false;

        int row_l = 0;
        int row_r = rows - 1;
        int rowMid;

        while (row_l <= row_r) {
            rowMid = (row_l + row_r) / 2;
            // FIX 2: Use col_r instead of colMid!
            if (matrix[colMid][rowMid] > target) {
                row_r = rowMid - 1;
            } else if (matrix[colMid][rowMid] < target) {
                row_l = rowMid + 1;
            } else {
                return true;
            }
        }

        return false;
    }
};