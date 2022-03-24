// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int bs(int v[],int t,int hi){
        int lo=0;
       // int hi=v.size()-1;
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
    int kthElement(int nums1[], int nums2[], int n, int m, int k)
    {
         int x=k-1;
        double y;
          
        
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
               cnt+=bs(nums1,mid,n-1);
               cnt+=bs(nums2,mid,m-1);
              // cout<<cnt<<endl;
               if (cnt<=x){
                   lo=mid+1;
               }
               else{
                   hi=mid;
               }
           }
           
      return lo;
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends