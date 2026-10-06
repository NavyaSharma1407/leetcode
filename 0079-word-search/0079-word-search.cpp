class Solution {
public:
    bool valid(int i, int j, vector<vector<char>>& board, string word, int idx, int m, int n){
        if(idx == word.size()) return true;
        if(i >= m || i < 0 || j < 0 || j >= n || word[idx] != board[i][j]) return false;
        char ch = board[i][j];
        board[i][j] = '#';
        bool found = valid(i+1,j,board,word,idx+1,m,n) ||
                valid(i-1,j,board,word,idx+1,m,n) ||
                valid(i,j+1,board,word,idx+1,m,n) ||
                valid(i,j-1,board,word,idx+1,m,n);
        board[i][j] = ch;
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == word[0] && valid(i,j,board,word,0,m,n)) return true;
            }
        }
        return false;
    }
};