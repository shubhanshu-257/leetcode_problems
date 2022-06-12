class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mi=nums[0];
        int ma=nums[0];
        int n=nums.size();
        int ans=nums[0];
        for (int i=1;i<n;i++){
            int x=ma;
            ma=max(ma*nums[i],max(mi*nums[i],nums[i]));
            mi=min(x*nums[i],min(mi*nums[i],nums[i]));
            
            ans=max(ans,ma);
            
        }
        return ans;
        
    }
};