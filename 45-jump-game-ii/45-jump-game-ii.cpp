class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        int cur=0;
        int max=0;
        int jump=0;
        for (int i=0;i<n-1;i++){
            if (i==cur){
                jump++;
                if (max<(nums[i]+i)){
                    max=nums[i]+i;
                }
                cur=max;
            }
            else{
                if (max<(nums[i]+i)){
                    max=nums[i]+i;
                }
            }
        }
        
        
        return jump;
    }
};