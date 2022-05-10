class Solution {
public:
    void f(int ind,vector<int>nums,vector<int>op,vector<vector<int>>&ans){
       ans.push_back(op);
        for (int i=ind;i<nums.size();i++){
            if (i!=ind && nums[i]==nums[i-1])continue;
            op.push_back(nums[i]);
            f(i+1,nums,op,ans);
            op.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>op;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        f(0,nums,op,ans);
        return ans;
    }
};