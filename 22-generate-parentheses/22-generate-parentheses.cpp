class Solution {
public:
    vector<string>v;
    void solve(int n,string op,int cnt){
        if (n==0 && cnt==0){
            v.push_back(op);
        }
        if (cnt>=0 && n>=1){
            n--;
            string m=op;
            string m1=op;
            solve(n,m+'(',cnt+1);
            if (op.size()){
            op.erase(op.size()-1,op.size());}
            solve(n,m1+')',cnt-1);
             if (op.size()){
            op.erase(op.size()-1,op.size());}
        }
    }
    vector<string> generateParenthesis(int n) {
        solve(2*n,"",0);
        return v;
    }
};