class Solution {
public:
    int solve(vector<int>arr,int lo, int high, int t){
        while(lo<=high){
            int mid=lo+(high-lo)/2;
            if (arr[mid]==t){
                return mid;
            }
            else if (arr[mid]>t){
                high=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return lo;
    }
    int searchInsert(vector<int>& nums, int target) {
        return solve(nums,0,nums.size()-1,target);
    }
};