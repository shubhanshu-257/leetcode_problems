class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>v1(26);
        vector<int>v2(26);
        for (int i=0;i<s.length();i++){
            v1[s[i]-'a']++;
        }
        for (int i=0;i<t.length();i++){
            v2[t[i]-'a']++;
        }
        if (v1==v2){
            return true;
        }
        return false;
    }
};