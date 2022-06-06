class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>v;
        int n=nums.size();
        if (n<4){
            return v;
        }
        sort(nums.begin(),nums.end());
        for (int i=0;i<n-2;i++){
            int x1=target-nums[i];
            
            for (int j=i+1;j<n-1;j++){
                int x2=x1-nums[j];
                
                int f=j+1;
                int b=n-1;
                while(f<b){
                    int s=nums[f]+nums[b];
                    if (s<x2){
                        f++;
                    }
                    else if (s>x2){
                        b--;
                    }
                    else{
                        
                        vector<int>ans;
                        ans.push_back(nums[i]);
                        ans.push_back(nums[j]);
                        ans.push_back(nums[f]);
                        ans.push_back(nums[b]);
                        v.push_back(ans);
                        while(f<b && ans[2]==nums[f])f++;
                        while(f<b && ans[3]==nums[b])b--;
                    }
                }
                while(j<n-1 && nums[j]==nums[j+1])j++;
            }
            while(i<n-2 && nums[i]==nums[i+1])i++;
        }
        return v;
    }
};