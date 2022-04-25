class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;
        int cnt=0;
        for (int i=0;i<nums.size();i++){
            cnt+=nums[i];
            if (ans<cnt){
                ans=cnt;
            }
            if (cnt<0){
                cnt=0;
            }
        }
        return ans;
    }
};