class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x=0;
        int y=0;
        int n=s.length();
        int m =t.length();
        while(x!=n){
            if (y==m){
                return false;
            }
            while(y<m){
                if (s[x]==t[y]){
                    x++;
                    y++;
                    break;
                }
                else{
                    y++;
                }
            }
        }
        return true;
    }
};