class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        dp[n-1]=0;
        
        for (int i=n-2;i>=0;i--){
            if ((i+nums[i])<=(n-1)){
                int y=INT_MAX-1;
                for (int j=i+1;j<=i+nums[i];j++){
                    y=min(y,dp[j]);
                }
                dp[i]=1+y;
            }
            else{
                int y=INT_MAX-1;
                for (int j=i+1;j<=n-1;j++){
                y=min(y,dp[j]);
            }
                dp[i]=1+y;
            }
        }
        return dp[0];
    }
};