class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for (int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int cnt=0;
        for (int i=0;i<nums.size();i++){
            if (mp[nums[i]]){
             int x=nums[i]-k;
            int y = nums[i]+k;
            if (mp[nums[i]]){
            mp[nums[i]]--;}
            if (x!=y){
            if (mp.find(x)!=mp.end()){
                //cout<<x<<endl;
                if (mp[x]){
                    cnt++;
                }
            }
            if (mp.find(y)!=mp.end()){
                if (mp[y]){
                    cnt++;
                }
            }}
            else{
                if (mp.find(x)!=mp.end()){
                
                if (mp[x]){
                   // cout<<x<<endl;
                    cnt++;
                }
            }
            }
            mp[nums[i]]=0;
        }}
        return cnt;
    }
};