class Solution {
public:
bool valid(vector<vector<char>>& board, int r, int c, int n){
    for(int i=0;i<9;i++){
        if(board[i][c] == n) return false;
        if(board[r][i] == n) return false;
        int row = 3 * (r / 3) + (i / 3);
        int col = 3 * (c / 3) + (i % 3);
        if(board[row][col] == n) return false;
    }
    return true;
}
bool solve(vector<vector<char>>& board){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j] == '.'){
                for(char num='1';num<='9';num++){
                    if(valid(board,i,j,num)){
                        board[i][j] = num;
                        if(solve(board)) return true;
                        board[i][j] = '.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};