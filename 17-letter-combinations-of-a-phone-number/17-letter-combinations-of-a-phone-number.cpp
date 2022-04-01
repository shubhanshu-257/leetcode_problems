class Solution {
public:
    unordered_map<char,string>mp;
    vector<string>v;
    void solve(string ip,string op){
        if (ip==""){
            v.push_back(op);
        }
        else{
        char x=ip[0];
        ip.erase(0,1);
            string m=mp[x];
        for (int i=0;i<m.size();i++){
            op+=m[i];
            solve(ip,op);
            op.erase(op.size()-1,op.size());
        }
            
        
        
        }
        
    }
    vector<string> letterCombinations(string digits) {
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        if (digits==""){
            return v;
        }
        solve(digits,"");
        return v;
    }
};