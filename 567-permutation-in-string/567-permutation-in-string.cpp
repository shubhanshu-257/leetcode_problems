class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>v1(26);
        vector<int>v2(26);
        int n = s1.length();
        int m = s2.length();
        if (n>m){
            return false;
        }
        for (int i=0;i<n;i++){
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }
        if (v1==v2){
            return true;
        }
        int k=0;
        for (int j=n;j<m;j++){
            v2[s2[j]-'a']++;
            v2[s2[k]-'a']--;
        k++;
        if (v1==v2){
            return true;
        }}
        
        return false;
        
    }
};