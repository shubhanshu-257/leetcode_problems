class Solution {
public:
    void solve(vector<int>nums,int t,vector<vector<int>>&ans,vector<int>op,int x){
        if (t==0){
            ans.push_back(op);
            op.clear();
            return;
        }
        else if (x==nums.size() || t<0){
            return;
        }
        else{
            solve(nums,t,ans,op,x+1);
            op.push_back(nums[x]);
            solve(nums,t-nums[x],ans,op,x);
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>>ans;
        vector<int>op;
        solve(c,t,ans,op,0);
        return ans;
    }
};