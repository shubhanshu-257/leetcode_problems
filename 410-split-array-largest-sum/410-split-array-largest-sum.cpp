class Solution {
public:
    bool valid(vector<int>a,int mid,int m){
        int s=0;
        int k=0;
        for (int i=0;i<a.size();i++){
            s+=a[i];
            if (mid<s){
                s=0;
                i--;
                k++;
            }
        }
        if (s!=0){
                s=0;
                k++;
            }
        if (m<k){
            return false;
        }
        return true;
    }
    int splitArray(vector<int>& nums, int m) {
        int lo=-1;
        int hi=0;
        int n=nums.size();
        for (int i=0;i<n;i++){
            hi+=nums[i];
            lo=max(lo,nums[i]);
        }
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            if (valid(nums,mid,m)){
                hi=mid;
            }
            else{
                lo=mid+1;
            }
        }
        return hi;
    }
};