class Solution {
public:
    void sol(int ind,vector<int>nums,int t,vector<vector<int>>&ans,vector<int>op,int x){
        if (t==0){
            ans.push_back(op);
            return;
        }
        else if (x==nums.size() || t<0){
            return;
        }
        for (int i=ind;i<nums.size();i++){
            if (i!=ind && nums[i]==nums[i-1])continue;
           // sol(i+1,nums,t,ans,op,x+1);
            op.push_back(nums[i]);
            sol(i+1,nums,t-nums[i],ans,op,x+1);
            op.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        sort(c.begin(),c.end());
        vector<vector<int>>ans;
        vector<int>op;
        sol(0,c,target,ans,op,0);
        return ans;
    }
};