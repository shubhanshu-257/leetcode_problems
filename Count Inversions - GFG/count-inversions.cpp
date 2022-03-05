// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long a[],long long temp[],long long int lo,long long int mid,long long int hi){
       long long int cnt=0;
       long long int i=lo;
       long long int j=mid;
       long long int k=0;
        while(i<=(mid-1)&& j<=hi){
            if (a[i]<=a[j]){
                temp[k++]=a[i++];
            }
            else{
                temp[k++]=a[j++];
                cnt+=(mid-i);
            }
        }
        while(i<=(mid-1)){
             temp[k++]=a[i++];
        }
        while(j<=hi){
            temp[k++]=a[j++];
        }
        k=0;
        for (long long int i=lo;i<=hi;i++){
            a[i]=temp[k++];
        }
        return cnt;
    }
    
    
    
    long long int mergesort(long long a[],long long temp[],long long int lo,long long int hi){
        long long int cnt=0;
        long long int mid=(lo+hi)/2;
        if (lo<hi){
            cnt+=mergesort(a,temp,lo,mid);
            cnt+=mergesort(a,temp,mid+1,hi);
            cnt+=merge(a,temp,lo,mid+1,hi);
        }
        return cnt;
    }
    long long int inversionCount(long long arr[], long long int n)
    {
        long long temp[n];
       long long int cnt = mergesort(arr,temp,0,n-1);
        return cnt;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends