// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int dp[101][10001];
	int solve(vector<int>nums, int V,int n){
	    if (n==0){
	        return INT_MAX-1;
	    }
	    if (V==0){
	        return 0;
	    }
	    if (n==1){
	        if (V%nums[n-1]==0){
	            return V/nums[n-1];
	        }
	        else{
	            return INT_MAX-1;
	        }
	    }
	    if (dp[n][V]!=-1){
	        return dp[n][V];
	    }
	    if (nums[n-1]<=V){
	        return dp[n][V]=min(1+solve(nums,V-nums[n-1],n),solve(nums,V,n-1));
	    }
	    else{
	        return dp[n][V]=solve(nums,V,n-1);
	    }
	}
	int MinCoin(vector<int>nums, int amount)
	{
	    memset(dp,-1,sizeof(dp));
	    int y=solve(nums,amount,nums.size());
	    if (y==INT_MAX-1){
	        return -1;
	    }
	    return y;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends