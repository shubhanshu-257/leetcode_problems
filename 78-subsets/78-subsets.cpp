class Solution {
public:
    vector<vector<int> >v;
    int k=0;
    void solve(vector<int>v1,vector<int>op){
        if (v1.size()==0){
            v.push_back(op);
            return;
        }
        op.push_back(v1[0]);
        v1.erase(v1.begin(),v1.begin()+1);
        solve(v1,op);
        op.pop_back();
        solve(v1,op);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>m;
        solve(nums,m);
        return v;
    }
};