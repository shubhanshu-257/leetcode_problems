class Solution {
public:
    long long int mod=1000000007;
    int maxProfit(vector<int>& inventory, int o) {
        long long int ans=0;
       sort (inventory.begin(),inventory.end());
        int n = inventory.size();
        for (int i=n-1;i>=0;i--){
            long long int diff=inventory[i]-(i>0?inventory[i-1]:0);
            long long x;
            o>(diff*(n-i))?x=(diff*(n-i)):x=o;
            long long l=inventory[i];
            long long r=l-x/(n-i);
            ans+=((l*(l+1))/2 - (r*(r+1))/2)*(n-i);
            ans=ans%mod;
            ans+=r*(x%(n-i));
            ans=ans%mod;
            o-=x;
        }
        return ans;
        
    }
};