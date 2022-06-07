class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int l=0;
        int r=0;
        int ans=0;
        int n=s.size();
        for (int i=0;i<n;i++){
            if (mp.find(s[i])!=mp.end()){
                r++;
                for (int j=l;j<mp[s[i]];j++){
                    mp.erase(s[j]);
                }
                l=mp[s[i]]+1;
                mp[s[i]]=i;
                if (ans<(r-l)){
                    ans=r-l;
                }
            }
            else{
                r++;
                mp[s[i]]=i;
                if (ans<(r-l)){
                    ans=r-l;
                }
            }
        }
        ans=max(ans,r-l);
        return ans;
    }
};