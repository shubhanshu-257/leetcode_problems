class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        int n=s.length();
        for(int i=0;i<n;i++){
            mp[s[i]]=i;
        }
        int max=0;
        int prev=-1;
        vector<int>v;
        for(int i=0;i<n;i++){
            if (mp[s[i]]>max){
                max=mp[s[i]];
            }
            if (i==max){
                v.push_back(max-prev);
                prev=max;
                max=0;
            }
        }
        return v;
    }
};