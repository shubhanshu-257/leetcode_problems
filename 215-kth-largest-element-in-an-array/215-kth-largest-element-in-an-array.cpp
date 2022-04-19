class Solution {
public:
    int pivot(vector<int>& nums,int lo,int hi){
        int x=nums[hi];
        int i=lo-1;
        for (int j=lo;j<hi;j++){
            if (nums[j]<=x){
                i++;
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[i+1],nums[hi]);
        return i+1;
    }
    int solve(vector<int>& nums,int x,int lo,int hi){
        int y=pivot(nums,lo,hi);
        if (y==x){
            return nums[x];
        }
        else if (x>y){
            lo=y+1;
        }
        else{
            hi=y-1;
        }
        return solve(nums,x,lo,hi);
    }
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        int x=n-k;
        int y=solve(nums,x,0,n-1);
        return y;
    }
};