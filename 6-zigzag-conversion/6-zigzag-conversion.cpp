class Solution {
public:
    string convert(string s, int n) {
        if (n<=0 || s==""){
            return s;
        }
        vector<string>v(n);
        int k=0;
        int x;
        for (int i=0;i<s.size();i++){
            v[k].push_back(s[i]);
            if (k==n-1 || (k!=0 && x==-1)){
                x=-1;
            }
            else{
                x=1;
            }
            k+=x;
            if (k<0)k=0;
        }
        string p="";
        for (auto m:v){
            p+=m;
        }
        return p;
    }
};