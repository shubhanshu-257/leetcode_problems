// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
vector<string>v;
void solve(int n,int one,int zero,string op){
    if (n==0){
        v.push_back(op);
        return;
    }
    string op1=op;
    string op2=op;
    op1+='1';
    op2+='0';
    solve(n-1,one+1,zero,op1);
    if (one>zero){
        solve(n-1,one,zero+1,op2);
    }
    
}
	vector<string> NBitBinary(int N)
	{
	    solve(N,0,0,"");
	    return v;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends