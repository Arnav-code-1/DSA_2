class Solution {
private:
    bool checkValid(char k,int r,int c,vector<vector<char>> board){
        for(int i=0;i<9;i++){
            if(board[r][i]==k) return false;
            else if(board[i][c]==k) return false;
            else if(board[3*(r/3)+i/3][3*(c/3)+i%3]==k) return false;
        }
        return true;
    }
    bool solve(vector<vector<char>> &board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char k='1';k<='9';k++){
                        if(checkValid(k,i,j,board)){
                            board[i][j]=k;
                            if(solve(board)==true) return true;
                            else board[i][j]='.';
                        }
                    }
                    return false;
                }
                
            }
        }
        return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);

    }
};