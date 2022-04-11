class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        int v[n][m];
        while(k--){
            
            for (int i=0;i<n;i++){
                for (int j=0;j<m;j++){
                    if (j!=0){
                        v[i][j]=grid[i][j-1];
                    }
                }
            }
            
            v[0][0]=grid[n-1][m-1];
            
            for (int i=1;i<n;i++){
                v[i][0]=grid[i-1][m-1];
            }
            for (int i=0;i<n;i++){
                for (int j=0;j<m;j++){
                    grid[i][j]=v[i][j];
                }
            }
        }
        return grid;
    }
    
};