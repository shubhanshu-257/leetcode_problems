class Solution {
public:
    int coinChange(vector<int>& coins, int a) {
        int n=coins.size();
        int dp[n+1][a+1];
        for (int i=0;i<=n;i++){
        for (int j=0;j<=a;j++){
            if (i==0){
                dp[i][j]=INT_MAX-1;
            }
            else if (j==0){
                dp[i][j]=0;
            }
            else if (i==1){
                if (j%coins[i-1]==0){
                    dp[i][j]=j/coins[i-1];
                }
                else{
                    dp[i][j]=INT_MAX-1;
                }
            }
        }    
        }
        for (int i=2;i<=n;i++){
            for (int j=1;j<=a;j++){
                if (coins[i-1]<=j){
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        if (dp[n][a]==INT_MAX-1){
            return -1;
        }
        return dp[n][a];
    }
};