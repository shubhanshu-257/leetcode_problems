class Solution {
    public int[] searchRange(int[] nums, int target) {
        int res1=-1;
        int res2=-1;
        int lo=0;
        int hi=nums.length-1;
        int[] arr = new int[2];
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if (nums[mid]==target){
                res1=mid;
                lo=mid+1;
            }
            else if (nums[mid]<target){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        lo=0;
        hi=nums.length-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if (nums[mid]==target){
                res2=mid;
                hi=mid-1;
            }
            else if (nums[mid]<target){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        arr[0]=res2;
        arr[1]=res1;
        return arr;
    }
}