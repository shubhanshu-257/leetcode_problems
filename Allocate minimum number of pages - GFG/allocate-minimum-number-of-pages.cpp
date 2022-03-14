// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool fun(int a[],int x,int n,int m){
        int s=0;
        int st=1;
        for (int i=0;i<n;i++){
            s+=a[i];
            if (s>x){
                s=a[i];
                st++;
            }
            if (st>m){
            return false;
        }
        }
        
        return true;
    }
    int findPages(int A[], int N, int M) 
    {
        int start=0;
        int end=0;
        for (int i=0;i<N;i++){
            end+=A[i];
            if (start<A[i]){
                start=A[i];
            }
        }
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            bool p=fun(A,mid,N,M);
            if (p){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends