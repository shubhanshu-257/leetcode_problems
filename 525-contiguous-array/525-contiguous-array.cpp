class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int x=nums.size();
        int cnt1=0;
            int cnt2=0;
        for (int i=0;i<x;i++){
            if (nums[i]==0){
                nums[i]=-1;
            }
        }
        unordered_map<int,int>mp;
        int sum=0;
        for (int i=0;i<x;i++){
            sum+=nums[i];
            if (sum==0){
                cnt1=i+1;
            }
            if (mp.find(sum)!=mp.end()){
                cnt2=(i+1)-mp[sum];
                if (cnt2>cnt1){
                    cnt1=cnt2;
                }
            }
            else{
                mp[sum]=i+1;
            }
        }
        return cnt1;
        
    }
};