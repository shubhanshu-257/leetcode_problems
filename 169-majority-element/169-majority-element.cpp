class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=1;
        int ans=nums[0];
        for (int i=1;i<n;i++){
            if (ans==nums[i]){
                cnt++;
            }
            else{
                if (cnt){
                cnt--;}
                else{
                    ans=nums[i];
                    cnt++;
                }
            }
        }
        return ans;
    }
};