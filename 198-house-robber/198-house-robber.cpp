class Solution {
public:
    
    int fun(int n,vector<int>& nums,vector<int>&v){
        if (n==0){
            return v[n]=nums[n];
        }
        if (n<=0){
            return 0;
        }
        if (v[n]!=-1){
            return v[n];
        }
        int pick=nums[n]+fun(n-2,nums,v);
        int npick=fun(n-1,nums,v);
        return v[n]=max(pick,npick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n);
        for (int i=0;i<n;i++){
            v[i]=-1;
        }
        return fun(n-1,nums,v);
    }
};