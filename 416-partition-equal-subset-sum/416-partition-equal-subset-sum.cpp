class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int n=nums.size();
        int sum=0;
        for (int i=0;i<n;i++){
            sum+=nums[i];
        }
        if (sum%2!=0){
            return false;
        }
        int s=sum/2;
        bool t[n+1][s+1];
        for (int i=0;i<n+1;i++){
            for (int j=0;j<s+1;j++){
            if (j==0){
                t[i][j]=true;
            }
            else if (i==0 && j!=0){
                t[i][j]=false;
            }
            }
        }
        for (int i=1;i<=n;i++){
            for (int j=1;j<=s;j++){
                if (nums[i-1]<=j){
                t[i][j]=t[i-1][j-nums[i-1]]||t[i-1][j];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][s];
    }
};