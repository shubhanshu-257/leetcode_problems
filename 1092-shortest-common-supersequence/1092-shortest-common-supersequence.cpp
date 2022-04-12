class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n=str1.size();
        int m=str2.size();
        int t[n+1][m+1];
        for (int i=0;i<=n;i++){
            for (int j=0;j<=m;j++){
                if (i==0 || j==0){
                    t[i][j]=0;
                }
            }
        }
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                if (str1[i-1]==str2[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }
                else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        int i=n;
        int j=m;
        string s="";
        while(i>0 && j>0){
            if (str1[i-1]==str2[j-1]){
                s+=str1[i-1];
                i--;
                j--;
            }
            else{
                if (t[i-1][j]>t[i][j-1]){
                    i--;
                }
                else{
                    j--;
                }
            }
        }
        int k=s.length()-1;
        string ans="";
        i=0;
        j=0;
        while(i<n && j<m){
            if (k>=0 && str1[i]==str2[j] && str1[i]==s[k]){
                ans+=str1[i];
                k--;
                i++;
                j++;
            }
            else if (k>=0 && str1[i]==s[k]){
                ans+=str2[j];
                j++;
            }
            else if (k>=0 && str2[j]==s[k]){
                ans+=str1[i];
                i++;
            }
            else{
                ans+=str1[i];
                ans+=str2[j];
                i++;
                j++;
            }
        }
        while(i<n){
            ans+=str1[i];
            i++;
        }
        while(j<m){
            
            ans+=str2[j];
            j++;
        }
        return ans;
    }
};