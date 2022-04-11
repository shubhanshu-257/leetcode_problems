class Solution {
public:
    
    int findTargetSumWays(vector<int>& nums, int target) {
       int sum=0;
        int n=nums.size();
        int c=0;
        for (int i=0;i<nums.size();i++){
            sum+=nums[i];
            if (nums[i]==0){
                c++;
            }
        }
        if (sum<target || (sum+target)%2!=0){
            return 0;
        }
        int x=(sum+target)/2;
        if (x<0){
            x=-x;
        }
        int dp[n+1][x+1];
        for (int i=0;i<=n;i++){
            for (int j=0;j<=x;j++){
                if (j==0){
                    dp[i][j]=1;
                }
                else if (i==0){
                    dp[i][j]=0;
                }
            }
        }
        for (int i=1;i<=n;i++){
            for (int j=1;j<=x;j++){
                if (nums[i-1]==0){
                    dp[i][j]=dp[i-1][j];
                }
                else if (nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return pow(2,c)*dp[n][x];
         
        
    }
};