class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int prev = (mid-1+n)%n;
            int next=(mid+1)%n;
            if (nums[prev]!=nums[mid] && nums[next]!=nums[mid]){
                return nums[mid];
            }
            if (nums[next]==nums[mid]){
                mid=next;
            }
            if ((mid-start+1)%2!=0){
                end=mid-2;
            }
            else {
                start=mid+1;
            }
        }
        return nums[0];
    }
};