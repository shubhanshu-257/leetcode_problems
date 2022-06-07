class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for (int i=0;i<n-2;i++){
            int l=i+1;
            int j=n-1;
            while(l<j){
                int y=nums[i]+nums[l]+nums[j];
                if (y==0){
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[j]);
                    ans.push_back(v);
                    
                    while(l<n-1 && nums[l]==v[1])l++;
                    while(l<j && nums[j]==v[2])j--;
                }
                else if (y<0){
                    l++;
                }
                else{
                   j--; 
                }
            }
            while(i<n-2 && nums[i]==nums[i+1])i++;
        }
        return ans;
    }
};