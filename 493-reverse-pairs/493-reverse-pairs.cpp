class Solution {
public:
    int merge(vector<int>& a,int lo, int mid, int hi){
        int i=lo;
        int j=mid;
        int cnt=0;
        while(i<=(mid-1) && j<=hi){
            if (a[i]<=2ll*a[j]){
                cnt+=(j-mid);
                i++;
            }
            else{
                j++;
            }
        }
        while(i<=(mid-1)){
            cnt+=(j-mid);
            i++;
        }
        int t[hi-lo+1];
        i=lo;
        j=mid;
        int k=0;
        while(i<=(mid-1) && j<=hi){
            if (a[i]<a[j]){
                t[k++]=a[i++];
            }
            else{
                t[k++]=a[j++];
            }
        }
        while(i<=(mid-1)){
            t[k++]=a[i++];
        }
        while(j<=hi){
            t[k++]=a[j++];
        }
        k=0;
        for (int m=lo;m<=hi;m++){
            a[m]=t[k++];
        }
        return cnt;
    }
    int mergesort(vector<int>& a,int lo,int hi){
        int cnt=0;
        if (lo<hi){
            int mid=(lo+hi)/2;
            cnt+=mergesort(a,lo,mid);
            cnt+=mergesort(a,mid+1,hi);
            cnt+=merge(a,lo,mid+1,hi);
        }
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return mergesort(nums,0,n-1);
    }
};