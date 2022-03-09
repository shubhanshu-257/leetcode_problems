class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v;
        v.push_back(-1);
        v.push_back(-1);
        int start=0;
        int end=n-1;
        int first=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if (target==nums[mid]){
                first=mid;
                end=mid-1;
            }
            else if (target < nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        int second=-1;
        start=0;
        end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if (target==nums[mid]){
                second=mid;
                start=mid+1;
            }
            else if (target < nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        if (first!=-1){
            v[0]=first;
        }
        if (second!=-1){
            v[1]=second;
        }
        return v;
    }
};