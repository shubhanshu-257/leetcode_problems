class Solution {
public:
    int bs(vector<int>v,int t){
        int lo=0;
        int hi=v.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if (t>=v[mid]){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return lo;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int x;
        double y;
        if ((n+m)%2==0){
            x=(n+m)/2;
        
        int lo;
        int hi;
        if (n!=0 && m!=0){
        lo=min(nums1[0],nums2[0]);
        hi=max(nums1[n-1],nums2[m-1]);
        }
        else if (n!=0){
            lo=nums1[0];
            hi=nums1[n-1];
        }
        else{
            lo=nums2[0];
            hi=nums2[m-1];
        }
            int d=lo;
            int e=hi;
           while(lo<hi){
               int mid=lo+(hi-lo)/2;
               int cnt=0;
               cnt+=bs(nums1,mid);
               cnt+=bs(nums2,mid);
              // cout<<cnt<<endl;
               if (cnt<x){
                   lo=mid+1;
               }
               else{
                   hi=mid;
               }
           }
            x++;
            int p=hi;
            lo=d;
            hi=e;
            while(lo<hi){
               int mid=lo+(hi-lo)/2;
               int cnt=0;
               cnt+=bs(nums1,mid);
               cnt+=bs(nums2,mid);
              // cout<<cnt<<endl;
               if (cnt<x){
                   lo=mid+1;
               }
               else{
                   hi=mid;
               }
           }
            
            y=((hi+p)*1.0)/2;
        }
        else{
            x=(n+m+1)/2;
            int lo;
        int hi;
        if (n!=0 && m!=0){
        lo=min(nums1[0],nums2[0]);
        hi=max(nums1[n-1],nums2[m-1]);
        }
        else if (n!=0){
            lo=nums1[0];
            hi=nums1[n-1];
        }
        else{
            lo=nums2[0];
            hi=nums2[m-1];
        }
            while(lo<hi){
               int mid=lo+(hi-lo)/2;
               int cnt=0;
               cnt+=bs(nums1,mid);
                
               cnt+=bs(nums2,mid);
               if (cnt<x){
                   lo=mid+1;
               }
               else{
                   hi=mid;
               }
           }
            y=hi*1.0;
        }
        return y;
    }
};