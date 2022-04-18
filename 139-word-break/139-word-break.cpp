class Solution {
public:
    unordered_map<string,int>mp;
    unordered_map<string,bool>mp1;
    
    bool solve(string s){
        if (s==""){
            return true;
        }
        if (mp1.find(s)!=mp1.end()){
            return mp1[s];
        }
        string m="";
        for (int i=0;i<s.size();i++){
            m+=s[i];
            
            if (mp.find(m)!=mp.end()){
                string p=s;
                s.erase(s.begin(),s.begin()+i+1);
              
               bool f= solve(s);
                
                if (f){
                return mp1[s]=f;}
                else{
                   s=p;
                }
            }
        }
        return mp1[s]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        for (int i=0;i<wordDict.size();i++){
            mp[wordDict[i]]++;
        }
        return solve(s);
        
    }
};