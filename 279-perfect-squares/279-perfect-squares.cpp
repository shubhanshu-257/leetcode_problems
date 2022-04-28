class Solution {
public:
    int numSquares(int n) {
        vector<int>v;
        for (int i=1;i*i<=n;i++){
            v.push_back(i*i);
        }
        int m=v.size();
        int dp[m+1][n+1];
        for (int i=0;i<=m;i++){
            for (int j=0;j<=n;j++){
                if (i==0 ){
                    dp[i][j]=INT_MAX-1;
                }
                else if (j==0){
                    dp[i][j]=0;
                }
            }
        }
        for (int j=1;j<=n;j++){
            if (j%v[0]==0){
                dp[1][j]=j/v[0];
            }
            else{
                dp[1][j]=INT_MAX-1;
            }
        }
        for (int i=2;i<=m;i++){
            for (int j=1;j<=n;j++){
                if (v[i-1]<=j){
                    dp[i][j]=min(1+dp[i][j-v[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[m][n];
    }
};