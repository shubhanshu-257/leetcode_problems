class Solution {
public:
    bool bfs(vector<vector<int>>& graph,vector<int>&vis,int s,vector<int>&color){
        queue<int>q;
        int col=0;
        q.push(s);
        vis[s]=1;
        color[s]=0;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            for (int i=0;i<graph[x].size();i++){
                if (vis[graph[x][i]]==0){
                    q.push(graph[x][i]);
                    color[graph[x][i]]=color[x]-1;
                    vis[graph[x][i]]=1;
                }
                else if (color[graph[x][i]]==color[x]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>vis(n);
        vector<int>color(n);
        bool c=true;
        for (int i=0;i<graph.size();i++){
            if (vis[i]==0){
               c= bfs(graph,vis,i,color);
            }
            if (c==false){
                return c;
            }
        }
        return true;
    }
};