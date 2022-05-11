class Solution {
public:
    bool issafe(int row,int col,vector<string>board,int n){
        int dr=row;
        int cr=col;
        while(row>=0 && col>=0){
        if (board[row][col]=='Q'){
            return false;
        }  
            row--;
            col--;
        }
        row=dr;
        col=cr;
        while(col>=0){
            if (board[row][col]=='Q'){
            return false;
        } 
            col--;
        }
        col=cr;
        while(row<n && col>=0){
            if (board[row][col]=='Q'){
            return false;
        } 
            col--;
            row++;
        }
        return true;
    }
    void solve(int col,vector<string>board,vector<vector<string>>&ans,int n){
        if (col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if (issafe(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,board,ans,n);
                board[row][col]='.';
            }
            
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s="";
        for (int i=0;i<n;i++){
            s+='.';
        }
        
        for (int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0,board,ans,n);
        return ans;
    }
};