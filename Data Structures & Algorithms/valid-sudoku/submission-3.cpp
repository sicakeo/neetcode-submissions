class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        vector<unordered_set<char>> rowMap(9);
        vector<unordered_set<char>> colMap(9);
        vector<unordered_set<char>> squareMap(9);

        //square i = 3 / 3
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < board.size(); j++) {
                int val = board[i][j];
                int square_idx = (i / 3) * 3 + (j / 3);
                if (board[i][j] == '.') continue;
                
                if (rowMap[i].count(val) || colMap[j].count(val) || squareMap[square_idx].count(val)) {
                    return false;
                }

                rowMap[i].insert(val);
                colMap[j].insert(val);
                squareMap[square_idx].insert(val);
            }
        }
        return true;
    }
};
