// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  long long t[1001][1001];
    long long coin(int S[],int m,int n){
        if (n==0){
            return t[m][n]=1;
        }
        if (m==0){
            return t[m][n]=0;
        }
        if (t[m][n]!=-1){
            return t[m][n];
        }
        if (S[m-1]<=n){
            return t[m][n]=coin(S,m,n-S[m-1])+coin(S,m-1,n);
        }
        return t[m][n]=coin(S,m-1,n);
    }
    long long int count(int S[], int m, int n) {
        
        memset(t,-1,sizeof(t));
        coin(S,m,n);
         return t[m][n];
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends