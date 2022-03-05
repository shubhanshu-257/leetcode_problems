class Solution {
public:
    int t[20001];
    
    int solve(vector<int>&a,int i){
        if (i>=a.size()){
            return 0;
        }
        if (t[i]!=-1){
            return t[i];
        }
        int cursum=a[i];
        int curval=a[i];
        int index=i+1;
        while(index<a.size() && a[index]==curval){
            cursum+=curval;
            index++;
        }
        while(index<a.size() && a[index]==curval+1){
            index++;
        }
        return t[i]=max(cursum+solve(a,index),solve(a,i+1));
    }
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        memset(t,-1,sizeof(t));
        return solve(nums,0);
    }
};