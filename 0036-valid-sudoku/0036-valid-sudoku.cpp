class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                // Skip empty cells
                if (board[i][j] == '.')
                    continue;

                // Check row
                for (int k = 0; k < 9; k++) {
                    if (k != j && board[i][j] == board[i][k])
                        return false;
                }

                // Check column
                for (int k = 0; k < 9; k++) {
                    if (k != i && board[i][j] == board[k][j])
                        return false;
                }

                // Check 3x3 box
                int row = (i / 3) * 3;
                int col = (j / 3) * 3;

                for (int r = row; r < row + 3; r++) {
                    for (int c = col; c < col + 3; c++) {

                        if (r == i && c == j)
                            continue;

                        if (board[r][c] == board[i][j])
                            return false;
                    }
                }
            }
        }

        return true;
    }
};