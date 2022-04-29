class Solution {
public:
    bool bip(vector<vector<int>>& graph,vector<int>vis,int s){
        queue<int>q;
        q.push(s);
        vis[s]=1;
        while(!q.empty()){
            int x= q.front();
            q.pop();
            for (int i=0;i<graph[x].size();i++){
                if (vis[graph[x][i]]==-1){
                    vis[graph[x][i]]=1-vis[x];
                    q.push(graph[x][i]);
                }
                else if (vis[graph[x][i]]==vis[x]) return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>vis(n);
        for (int i=0;i<n;i++){
            vis[i]=-1;
        }
        for (int i=0;i<n;i++){
            if (vis[i]==-1){
                if (!bip(graph,vis,i))return false;
            }
        }
        return true;
    }
};