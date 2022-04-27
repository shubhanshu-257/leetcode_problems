class Solution {
public:
    bool ispal(string s){
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if (s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    vector<vector<string>>v;
    void solve(string ip,vector<string>p){
        if (ip.length()==0){
            v.push_back(p);
            return;
        }
        else{
           
            for (int i=0;i<ip.size();i++){
                string op=ip.substr(0,i+1);
                string a=ip.substr(i+1);
                if (ispal(op)){
                    p.push_back(op);
                    solve(a,p);
                    p.pop_back();
                }
            }
        }
        p.clear();
    }
    vector<vector<string>> partition(string s) {
        vector<string>m;
        solve(s,m);
        return v;
    }
};