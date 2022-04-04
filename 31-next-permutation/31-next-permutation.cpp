class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int x=-1;
        for (int i=n-1;i>0;i--){
            if (nums[i-1]<nums[i]){
                x=i-1;
                break;
            }
        }
        int m=0;
        if (x>=0){
        for (int i=n-1;i>=0;i--){
            if (nums[x]<nums[i]){
                m=i;
                break;
            }
        }
      //  cout<<m<<x;
        
        swap(nums[x],nums[m]);}
        reverse(nums.begin()+x+1,nums.end());
    }
};