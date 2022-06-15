class Solution {
public:
    queue<pair<int,int>>q;
    void bfs(vector<vector<int>>& mat,vector<vector<int>>& v,int n,int m){
        
        int dx[]={0,0,1,-1};
        int dy[]={-1,1,0,0};
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for (int i=0;i<4;i++){
                int xn=x+dx[i];
                int yn=y+dy[i];
                if (xn>=0 && yn>=0 && xn<n && yn<m && !v[xn][yn]){
                    q.push({xn,yn});
                    mat[xn][yn]=mat[x][y]+1;
                    v[xn][yn]=1;
                }
            }
        }
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> v( n , vector<int> (m, 0)); 
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (mat[i][j]==0){
                    v[i][j]=1;
                    q.push({i,j});
                }
            }
        }
        bfs(mat,v,n,m);
        return mat;
    }
};