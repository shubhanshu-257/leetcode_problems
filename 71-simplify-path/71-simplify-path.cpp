class Solution {
public:
    string simplifyPath(string s) {
        int n=s.length();
        stack<string>v;
        string m="";
        for (int i=0;i<n;i++){
            if (s[i]=='/'){
                if (m==".."){
                    if (!v.empty()){
                        v.pop();
                        m="";
                    }
                    else{
                        m="";
                    }
                }
                else if (m=="."){
                    m="";
                }
                else if (m.length()>0){
                    //cout<<m<<endl;
                    v.push(m);
                    m="";
                }
                else{
                    m="";
                }
                
            }
            else{
                m+=s[i];
            }
        }
        if (m.length()>0){
            //cout<<m;
            if (m==".."){
                if (!v.empty()){
                        v.pop();
                        m="";
                    }
                    else{
                        m="";
                    }
            }
            else if (m=="."){
                ;
            }
            else{
              v.push(m);
                    m="";  
            }
        }
        string ans="";
        vector<string>w;
        while(!v.empty()){
            string p=v.top();
            w.push_back(p);
            v.pop();
        }
         reverse(w.begin(),w.end());
        for (int i=0;i<w.size();i++){
            ans+='/';
            string g=w[i];
            ans+=g;
        }
        if (ans.length()==0){
            ans="/";
        }
       
        return ans;
    }
};