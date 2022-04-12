class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
               
                    int cnt=0;
                    if (i>0 && board[i-1][j]>0){
                        cnt++;
                    }
                    if (j>0 && board[i][j-1]>0){
                        cnt++;
                    }
                    if (i>0 && j>0 && board[i-1][j-1]>0){
                        cnt++;
                    }
                    if (i<(n-1) && board[i+1][j]>0){
                        cnt++;
                    }
                    if (j<(m-1) && board[i][j+1]>0){
                        cnt++;
                    }
                    if (i<(n-1) && j<(m-1) && board[i+1][j+1]>0){
                        cnt++;
                    }
                    if (i>0 && j<(m-1) && board[i-1][j+1]>0){
                        cnt++;
                    }
                    if (i<(n-1) && j>0 && board[i+1][j-1]>0){
                        cnt++;
                    }
               
                    if (board[i][j]==1){
                        if (cnt<=1){
                            board[i][j]=2;
                        }
                        if (cnt>3){
                            board[i][j]=2;
                        }
                    }
                    else{
                        if (cnt==3){
                            board[i][j]=-2;
                        }
                    }
                
            }
        }
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (board[i][j]==-2){
                    board[i][j]=1;
                }
                if (board[i][j]==2){
                    board[i][j]=0;
                }
            }
        }
    }
};