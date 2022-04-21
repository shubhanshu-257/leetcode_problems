class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int fromstart=1;
        int fromlast=1;
       
        int n=nums.size();
         vector<int>v(n);
        for(int i=0;i<n;i++){
            v[i]=1;
        }
        for(int i=0;i<n;i++){
            v[i]*=fromstart;
            fromstart*=nums[i];
            v[n-i-1]*=fromlast;
            fromlast*=nums[n-i-1];
        }
        return v;
    }
};