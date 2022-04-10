class Solution {
public:
    int con(string s){
        int m=0;
        for (int i=0;i<s.length();i++){
            if (s[i]!='-'){
                m=m*10+(s[i]-'0');
            }
        }
        if (s[0]=='-'){
            return -m;
        }
        return m;
    }
    int calPoints(vector<string>& ops) {
        int n=ops.size();
        vector<int>v;
        for (int i=0;i<n;i++){
            
            if (ops[i]=="C"){
                v.pop_back();
            }
            else if (ops[i]=="D"){
                
                v.push_back(2*v[v.size()-1]);
            }
            else if (ops[i]=="+"){
                v.push_back(v[v.size()-1]+v[v.size()-2]);
            }
            else{
                int k=con(ops[i]);
              
               v.push_back(k);
            }
        }
        int s=0;
        for (int i=0;i<v.size();i++){
            s+=v[i];
        }
        return s;
    }
};