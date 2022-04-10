class Solution {
public:
    vector<int> avoidFlood(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>v,m;
        set<int>v1;
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=0){
                if (mp.find(nums[i])!=mp.end()){
                    
                       // cout<<nums[i]<<" "<<i<<endl;
                        
                        
                      auto x=v1.upper_bound(mp[nums[i]]);
                       // cout<<x-v1.begin()<<endl;
                        if (x!=v1.end()){
                            
                            v[*x]=nums[i];
                            v1.erase(x);
                            mp[nums[i]]=i;
                        }
                        else{
                            return m;
                        }
                   
                }
                else{
                    mp[nums[i]]=i;
                }
                 v.push_back(-1);
            }
            else{
                v1.insert(i);
                v.push_back(1);
            }
            
        }
        return v;
       
    }
};