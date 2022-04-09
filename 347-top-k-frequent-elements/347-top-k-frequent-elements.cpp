class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for (int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>v;
        priority_queue<pair<int,int>>q;
        for (int i=0;i<nums.size();i++){
            if (mp[nums[i]]>0){
                q.push({mp[nums[i]],nums[i]});
                mp[nums[i]]=0;
            }
        }
        while(k--){
            v.push_back(q.top().second);
            q.pop();
        }
        return v;
    }
};