class Solution {
public:
    vector<vector<int>>v;
    int i=0;
    void s(vector<int>& c,int target,int x,vector<int>m){
        if (target==0){
            v.push_back(m);
            m.clear();
            i++;
            return;
        }
        else if (x==c.size()|| target<0){
            return;
        }
        else{
            s(c,target,x+1,m);
            m.push_back(c[x]);
            s(c,target-c[x],x,m);
            
            
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>m;
        s(candidates,target,0,m);
        return v;
    }
};