class Solution {
public:
    int findMin(vector<int>& nums) {
        int n =nums.size();
        int start=0;
        int end=n-1;
        if (n==1){
            return nums[0];
        }
        if (nums[0]<nums[n-1]){
            return nums[0];
        }
        
        while(start<=end){
          int mid=start+(end-start)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            if (nums[mid]<nums[prev] && nums[mid]<nums[next]){
                return nums[mid];
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
};