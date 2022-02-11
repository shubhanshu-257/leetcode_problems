class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp,mp1;
        int n = s1.length();
        int m = s2.length();
        for(int i=0;i<n;i++){
            mp[s1[i]]++;
            mp1[s1[i]]++;
        }
        int cnt=n;
        int k=0;
        for (int i=0;i<m;i++){
            if (mp.find(s2[i])!=mp.end()){
                if (mp[s2[i]]){
                   // cout<<i<<endl;
                    cnt--;
                    mp[s2[i]]--;
                     if((i+1-k)==n){
                         return true;
                     }
                }
                else{
                    while(s2[k]!=s2[i]){
                        mp[s2[k]]++;
                        k++;
                       // cout<<i<<endl;
                    }
                    k++;
                }
            }
            else{
                mp=mp1;
                cnt=n;
                k=i+1;
            }
        }
        return false;
    }
};