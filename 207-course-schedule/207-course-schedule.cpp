class Solution {
public:
     vector<int>adj[2001];
    bool check(int s,vector<int>&vis,vector<int>&dvis){
        vis[s]=1;
        dvis[s]=1;
        for (auto it:adj[s]){
            if (!vis[it]){
                if (check(it,vis,dvis)){
                    return true;
                }
            }
            else if (dvis[it]){
                return true;
            }
            
        }
        dvis[s]=0;
        return false;
    }
    bool canFinish(int num, vector<vector<int>>& prerequisites) {
        int n=prerequisites.size();
        for(int i=0;i<n;i++){
            int x=prerequisites[i][0];
            int y=prerequisites[i][1];
            adj[x].push_back(y);
        }
        vector<int>vis(num);
        vector<int>dvis(num);
        for (int i=0;i<num;i++){
            if(!vis[i]){
                if (check(i,vis,dvis)){
                    return false;
                }
            }
        }
        return true;
    }
};