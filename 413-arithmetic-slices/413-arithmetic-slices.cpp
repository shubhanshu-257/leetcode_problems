class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if (n<3){
            return 0;
        }
        int cnt=0;
        int ans=0;
        int x=nums[1]-nums[0];
        for (int i=2;i<n;i++){
            int y = nums[i]-nums[i-1];
            if (y==x){
                cnt++;
            }
            else{
                ans+=(cnt*(cnt+1))/2;
                x=y;
                cnt=0;
            }
        }
        ans+=(cnt*(cnt+1))/2;
        return ans;
    }
};