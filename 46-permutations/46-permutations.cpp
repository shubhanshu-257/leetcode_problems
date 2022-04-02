class Solution {
public:
    vector<vector<int>>v;
    void solve(vector<int>ip,vector<int>op){
        if (ip.size()==0){
            v.push_back(op);
        }
        else{
        for (int i=0;i<ip.size();i++){
            vector<int>p;
            p=ip;
            int m=ip[i];
            ip.erase(ip.begin()+i,ip.begin()+i+1);
            op.push_back(m);
            solve(ip,op);
            if (op.size()>0){
                op.erase(op.end()-1,op.end());
            }
            ip=p;
        }}
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>m;
        solve(nums,m);
        return v;
    }
};