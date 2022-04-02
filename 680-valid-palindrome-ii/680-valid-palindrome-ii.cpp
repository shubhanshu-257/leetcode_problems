class Solution {
public:
    bool validPalindrome(string s) {
        int l=0;
        int h=s.length()-1;
        int k=0;
        int k1=0;
        while(l<h){
            if (s[l]!=s[h]){
                l++;
                k++;
            }
            else{
                l++;
                h--;
            }
        }
        l=0;
        h=s.length()-1;
        while(l<h){
            if (s[l]!=s[h]){
                h--;
                k1++;
            }
            else{
                l++;
                h--;
            }
        }
        if (k<=1 || k1<=1){
            return true;
        }
        return false;
        
    }
};