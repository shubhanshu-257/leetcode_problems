class Solution {
public:
    int cnt=0;
    queue<pair<int,int>>q;
    
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int m1=0;
        queue<pair<int,int>>q;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (grid[i][j]==2){
                  q.push({i,j});
                }
                if (grid[i][j]!=0){
                    m1++;
                }
            }
        }
        int p=0;
        while(!q.empty()){
            int x1=q.size();
            p+=x1;
            int x=0;
            while(x1--){
                int i=q.front().first;
                int j=q.front().second;
                
                q.pop();
                if (j<m-1 && grid[i][j+1]==1){
                x=1;
                grid[i][j+1]=2;
                q.push({i,j+1});
            }
                if (j>0 && grid[i][j-1]==1){
                x=1;
                    grid[i][j-1]=2;
                q.push({i,j-1});
            }
                if (i<n-1 && grid[i+1][j]==1){
                x=1;
                    grid[i+1][j]=2;
                q.push({i+1,j});
            }
            if (i>0 && grid[i-1][j]==1){
                x=1;
                grid[i-1][j]=2;
                q.push({i-1,j});
            }
            
            
            
            
            }
            if (!q.empty()){
                cnt++;
            }
        }
        if (p==m1){
        return cnt;}
        else{
            return -1;
        }
        
    }
};