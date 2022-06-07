class Solution {
public:
    vector<string>v;
    void sol(int n,int a,int b,string op){
        if (n==0){
            if (a==b){
                v.push_back(op);
            }
            return;
        }
        op+='(';
        a++;
        
            sol(n-1,a,b,op);
        op.pop_back();
        a--;
        op+=')';
        
        
        b++;
        if (a>=b){
        sol(n-1,a,b,op);}
    }
    vector<string> generateParenthesis(int n) {
        sol(2*n,0,0,"");
        return v;
    }
};