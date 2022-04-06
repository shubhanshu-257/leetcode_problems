class Solution {
public:
    long long int mod=1000000007;
    bool bs(vector<int>v,int t,int l,int h){
        while(l<=h){
            int mid=l+(h-l)/2;
            if (v[mid]==t){
                return true;
            }
            else if (v[mid]>t){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
    int threeSumMulti(vector<int>& arr, int X) {
       int n = arr.size(), mod = 1e9+7, ans = 0;
        unordered_map<int, int> m;
        
        for(int i=0; i<n; i++) {
            ans = (ans + m[X - arr[i]]) % mod;
            
            for(int j=0; j<i; j++) m[arr[i] + arr[j]]++;
        }
        return ans;
    }
};