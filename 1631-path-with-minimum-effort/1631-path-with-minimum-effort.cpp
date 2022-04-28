class Solution {
public:
    bool isvalid(int x,int y,int n,int m){
        return x>=0 && y>=0 && x<n && y<m;
    }
    bool bfs(vector<vector<int>>& heights,int k){
        queue<pair<int,int>>q;
        q.push({0,0});
        int dx[4]={0,-1,0,1};
        int dy[4]={-1,0,1,0};
         int vis[101][101];
        memset(vis,0,sizeof(vis));
        vis[0][0]=1;
        while(!q.empty()){
            pair<int,int>p=q.front();
            q.pop();
            int x=p.first;
            int y=p.second;
            
            if (x==heights.size()-1 && y==heights[0].size()-1){
                return true;
            }
            for (int i=0;i<4;i++){
                int xd=dx[i]+x;
                int yd=dy[i]+y;
                if (isvalid(xd,yd,heights.size(),heights[0].size()) && !vis[xd][yd]){   
                    
                if (abs(heights[xd][yd]-heights[x][y])<=k){
                    q.push({xd,yd});
                vis[xd][yd]=1;
                }}
                }
        }
        return false;
        
    }
    int minimumEffortPath(vector<vector<int>>& heights) {
        int low=0;
        int high=1e6;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if (bfs(heights,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};