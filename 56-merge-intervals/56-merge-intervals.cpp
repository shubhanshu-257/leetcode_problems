class Solution {
public:
    bool static sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>>ans;
        
        sort(v.begin(), v.end());
        int x=v[0][0];
        int y=v[0][1];
        int k=0;
        
        for (int i=1;i<v.size();i++){
            int x1=v[i][0];
            int y1=v[i][1];
            if (x1>y){
                ans.push_back({x,y});
                //ans[k].push_back(y);
                x=x1;
                y=y1;
                k++;
            }
            else{
                y=max(y,y1);
                x=min(x,x1);
            }
        }
        ans.push_back({x,y});
        return ans;
        
        
    }
};