class Solution {
public:
    int bs(vector<int>&nums,int start,int end,int t){
        while(start<=end){
            int mid=start+(end-start)/2;
            if (nums[mid]==t){
                return mid;
            }
            else if (nums[mid]<t){
                start=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        return -1;
    }
    int minbs(vector<int>&nums,int start,int end){
        int n=nums.size();
        if (n==1){
            return 0;
        }
        if (nums[0]<nums[n-1]){
            return 0;
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            if (nums[prev]>=nums[mid] && nums[next] >= nums[mid]){
                return mid;
            }
            else if (nums[0]<=nums[mid]){
                start=mid+1;
            }
            else if (nums[mid]<=nums[n-1]){
                end=mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int x=minbs(nums,0,n-1);
        int m=bs(nums,x,n-1,target);
        int p=bs(nums,0,x-1,target);
        if (m!=-1){
            return m;
        }
        else if (p!=-1){
            return p;
        }
        else{
            return -1;
        }
    }
};