class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp,mp1;
        for (int i=0;i<s.length();i++){
            if (mp.find(s[i])!=mp.end()){
                if (mp[s[i]]!=t[i]){
                    return false;
                }
            }
            else{
                mp[s[i]]=t[i];
            }
        }
        for (int i=0;i<s.length();i++){
            if (mp1.find(t[i])!=mp1.end()){
                if (mp1[t[i]]!=s[i]){
                    return false;
                }
            }
            else{
                mp1[t[i]]=s[i];
            }
        }
        return true;
    }
};