class Solution {
public:
    void fun(vector<vector<char>>& grid,int i,int j,int n,int m){
        queue<pair<int,int>>q;
        q.push({i,j});
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
        grid[i][j]='2';
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for (int i=0;i<4;i++){
                int x1=x+dx[i];
               int y1=y+dy[i];
                if (x1>=n || x1<0 || y1>=m || y1<0|| grid[x1][y1]!='1'){
                    continue;
                }
                grid[x1][y1]='2';
                q.push({x1,y1});
            }
            
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (grid[i][j]=='1'){
                    cnt++;
                    fun(grid,i,j,n,m);
                }
            }
        }
        return cnt;
    }
};