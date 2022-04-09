class Solution {
public:
    vector<string>v;
    void solve(string ip,string op){
        if (ip.size()==0){
            v.push_back(op);
            return;
        }
        if (ip[0]>='0' && ip[0]<='9'){
            op+=ip[0];
            ip.erase(ip.begin()+0);
            solve(ip,op);
            return;
        }
        else{
            if (ip[0]>='a'&& ip[0]<='z'){
                string op1=op;
                string op2=op;
                op1+=ip[0];
                op2+=(ip[0]-32);
                ip.erase(ip.begin()+0);
                solve(ip,op1);
                solve(ip,op2);
                return;
            }
            else{
                if (ip[0]>='A'&& ip[0]<='Z'){
                string op1=op;
                string op2=op;
                op1+=ip[0];
                op2+=(ip[0]+32);
                ip.erase(ip.begin()+0);
                solve(ip,op1);
                solve(ip,op2);
                return;
            }
            }
        }
}
    vector<string> letterCasePermutation(string s) {
        string op="";
        solve(s,op);
        return v;
    }
};