// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        int cnt=0;
        for (int i=0;i<n;i++){
            if (arr[i]=='P'){
                int m=i-k;
                if (i-k<0){
                    m=0;
                }
                int p=i+k;
                if (i+k>n){
                    p=n-1;
                }
                while(m<=p){
                    if (arr[m]=='T'){
                        cnt++;
                        arr[m]='A';
                        break;
                    }
                    m++;
                }
            }
        }
        return cnt;
    }
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n >> k;
		char arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		Solution obj;
		cout<<obj.catchThieves(arr, n, k) << endl;
	}
	return 0; 
} 

  // } Driver Code Ends