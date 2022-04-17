class Solution {
public:
    bool dfs(vector<vector<char>>& board,int i,int j,int cnt,string word,int n,int m){
        if (cnt==word.length()){
            return true;
        }
        if (i==-1 || j==-1 || i==n || j==m || board[i][j]!=word[cnt]){
            return false;
        }
        char tmp=board[i][j];
        board[i][j]='*';
        bool f=dfs(board,i+1,j,cnt+1,word,n,m)||
            dfs(board,i-1,j,cnt+1,word,n,m)||
            dfs(board,i,j+1,cnt+1,word,n,m)||
            dfs(board,i,j-1,cnt+1,word,n,m);
        board[i][j]=tmp;
        return f;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (board[i][j]==word[0] && dfs(board,i,j,0,word,n,m)){
                    return true;
                }
            }
        }
        return false;
    }
};