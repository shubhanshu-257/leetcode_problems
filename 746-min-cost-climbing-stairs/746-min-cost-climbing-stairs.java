class Solution {
    int [] dp = new int[1002];
    public int fun(int[] cost,int n){
        if (n==1 || n==0){
            return dp[n]=0;
        }
        if (dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=Math.min(cost[n-2]+fun(cost,n-2),cost[n-1]+fun(cost,n-1));
    }
    public int minCostClimbingStairs(int[] cost) {
        int n=cost.length;
        for (int i=0;i<cost.length+1;i++){
            dp[i]=-1;
        }
        fun(cost,n);
        return dp[n];
    }
}