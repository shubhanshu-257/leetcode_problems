class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        int n=s.length();
        int m=0;
        int k=0;
        for (int i=0;i<n;i++){
            if (s[i]=='('){
                k++;
            }
            else if (s[i]==')'){
                if (k){
                    m++;
                    k--;
                }
            }
        }
        int p=m;
        string ans="";
        for (int i=0;i<n;i++){
            if (s[i]=='('){
                if (m){
                    ans+=s[i];
                    m--;
                }
            }
            else if (s[i]==')'){
                if (p && p>m){
                    ans+=s[i];
                    p--;
                }
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
        
    }
};