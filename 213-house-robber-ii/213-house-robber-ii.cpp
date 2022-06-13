class Solution {
public:
    int fun(int n,vector<int>& nums,vector<int>& v){
        if (n==0){
            return v[n]=nums[n];
        }
        if (n<=0){
            return 0;
        }
        if (v[n]!=-1){
            return v[n];
        }
        return v[n]=max(nums[n]+fun(n-2,nums,v),fun(n-1,nums,v));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n);
        for (int i=0;i<n;i++){
            v[i]=-1;
        }
        int x=nums[0];
        x=max(x,fun(n-2,nums,v));
        for (int i=0;i<n;i++){
            v[i]=-1;
        }
        nums.erase(nums.begin()+0);
        int y=fun(n-2,nums,v);
        return max(x,y);
    }
};