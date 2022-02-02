class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>v;
        int n = s.length();
        int m = p.length();
        if (n<m){
            return v;
        }
        vector<int>v1(26);
        vector<int>v2(26);
        for (int i=0;i<m;i++){
            v1[p[i]-'a']++;
            v2[s[i]-'a']++;
        }
        if (v1==v2){
            v.push_back(0);
        }
        int k=0;
        for (int i=m;i<n;i++){
            v2[s[k]-'a']--;
            v2[s[i]-'a']++;
            k++;
            if (v1==v2){
                v.push_back(k);
            }
            
        }  
      return v;
    }
};