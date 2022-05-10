// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
vector<int>v;
void solve(vector<int>ip,int sum){
    if (ip.size()==0){
        v.push_back(sum);
        return;
    }
    sum+=ip[0];
    int x=ip[0];
    ip.erase(ip.begin()+0);
    solve(ip,sum);
    sum-=x;
    solve(ip,sum);
    
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        solve(arr,0);
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends