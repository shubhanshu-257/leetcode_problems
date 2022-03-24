// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
  int bs(vector<int>v,int t,int hi){
      int lo=0;
      int res=0;
      while(lo<=hi){
          int mid=lo+(hi-lo)/2;
          if (t==v[mid]){
              lo=mid+1;
          }
          else if (t>v[mid]){
              lo=mid+1;
          }
          else{
              hi=mid-1;
          }
      }
      return lo;
      
  }
    int median(vector<vector<int>> &matrix, int r, int c){
       int x=(r*c+1)/2;
       int lo=2001;
       int hi=0;
       for (int i=0;i<r;i++){
           lo=min(lo,matrix[i][0]);
           hi=max(hi,matrix[i][c-1]);
       }
     //  cout<<lo<<" "<<hi<<endl;
       while(lo<hi){
           int mid=lo+(hi-lo)/2;
          // cout<<mid;
           int cnt=0;
           for (int k=0;k<r;k++){
               cnt+=bs(matrix[k],mid,c-1);
           }
         //  cout<<cnt<<endl;
           if (cnt<x){
               lo=mid+1;
           }
           else{
               hi=mid;
           }
       }
       return hi;
      
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends