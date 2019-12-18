class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        char k;
        int kk;
        int ii = 0, jj = 0;
        
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                k = board[i][j];
                kk = k - '0';
                if(kk == 1 || kk == 2 || kk == 3 || kk == 4 || kk == 5 || kk == 6 || kk == 7 || kk == 8 ||kk == 9){
                for(int m = 0; m < 9; m++)
                    if(k == board[i][m] & m != j)
                        return false;
                
                for(int n = 0; n < 9; n++)
                    if(k == board[n][j] & n != i)
                        return false;
                
                ii = i % 3;
                jj = j % 3;
                
                if(ii == 0 & jj == 0){
                    if(board[i][j] == board[i+1][j+1])
                        return false;
                    if(board[i][j] == board[i+1][j+2])
                        return false;
                    if(board[i][j] == board[i+2][j+1])
                        return false;
                    if(board[i][j] == board[i+2][j+2])
                        return false;
                }
                
                if(ii == 0 & jj == 1){
                    if(board[i][j] == board[i+1][j-1])
                        return false;
                    if(board[i][j] == board[i+1][j+1])
                        return false;
                    if(board[i][j] == board[i+2][j+1])
                        return false;
                    if(board[i][j] == board[i+2][j-1])
                        return false;
                }
                    
                if(ii == 0 & jj == 2){
                    if(board[i][j] == board[i+1][j-1])
                        return false;
                    if(board[i][j] == board[i+1][j-2])
                        return false;
                    if(board[i][j] == board[i+2][j-1])
                        return false;
                    if(board[i][j] == board[i+2][j-2])
                        return false;
                }
                
                if(ii == 1 & jj == 0){
                    if(board[i][j] == board[i+1][j+1])
                        return false;
                    if(board[i][j] == board[i+1][j+2])
                        return false;
                }
                
                if(ii == 1 & jj == 1){
                    if(board[i][j] == board[i+1][j+1])
                        return false;
                    if(board[i][j] == board[i+1][j-1])
                        return false;
                }
                
                if(ii == 1 & jj == 2){
                    if(board[i][j] == board[i+1][j-1])
                        return false;
                    if(board[i][j] == board[i+1][j-2])
                        return false;
                }
            }
        }
        }
   return true;
    }
};