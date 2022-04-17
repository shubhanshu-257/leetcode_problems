class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for (int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>>v;
        for (auto i:mp){
            vector<string>p;
            for (int j=0;j<i.second.size();j++){
                p.push_back(i.second[j]);
            }
            v.push_back(p);
        }
        return v;
    }
};