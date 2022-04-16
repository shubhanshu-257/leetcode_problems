class Solution {
public:
    int ex(string s,int l,int r){
        while(l>=0 && r<s.length() && s[l]==s[r]){
            l--;
            r++;
        }
        return r-l-1;
    }
    string longestPalindrome(string s) {
        int start=0;
        int end=0;
        for (int i=0;i<s.length();i++){
            int odd=ex(s,i,i);
            int even=ex(s,i,i+1);
           // cout<<odd<<" "<<even<<endl;
            int len=max(even,odd);
            if (len>(end-start)){
                start=i-(len-1)/2;
                end=i+len/2;
            }
          //  cout<<start<<" "<<end<<endl;
        }
        string m="";
        for (int i=start;i<=end;i++){
            m+=s[i];
        }
        return m;
    }
};