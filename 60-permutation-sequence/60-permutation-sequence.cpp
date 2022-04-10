class Solution {
public:
    
   
    string getPermutation(int n, int k) {
        k--;
        string s="";
        vector<int>v;
        v.push_back(1);
        for (int i=2;i<=n;i++){
            v.push_back(v[i-2]*i);
            s+=(to_string(i-1));
        }
        s+=(to_string(n));
        string ans="";
        for (int i=n;i>=1;i--){
            int x=v[i-1]/s.size();
            int m=0;
                m=k/x;
                k=k%x;
            ans+=s[m];
           
         s.erase(s.begin()+m);
            
        }
        return ans;
    }
};