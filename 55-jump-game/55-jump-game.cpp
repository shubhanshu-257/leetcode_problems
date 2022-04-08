class Solution {
public:
    bool canJump(vector<int>& nums) {
        int x=nums[0];
        if (x==0&& nums.size()!=1){
            return false;
        }
        for (int i=1;i<nums.size();i++){
            x--;
            x=max(x,nums[i]);
            if (x==0 && i!=(nums.size()-1)){
                return false;
            }
        }
        return true;
    }
};