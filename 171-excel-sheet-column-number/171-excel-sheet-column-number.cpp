class Solution {
public:
    int titleToNumber(string c) {
        int a[26];
        int k=0;
        int ans=0;
        for (int i=c.length()-1;i>=0;i--){
            k*=26;
            ans+=k;
            if (k==0){
                k=1;
                ans+=(c[i]-'A')+1;
            }
            else{
                ans+=(k*(c[i]-'A'));
            }
            
            
        }
        return ans;
        
    }
};