class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        
        for (int i=0;i<n;){
            int s=i;
            while(s<n && nums[s]==0)s++;
            int e=s;
            int cnt=0;
            int sn=-1;
            int en=-1;
            while(e<n && nums[e]!=0){
                if (nums[e]<0){
                    cnt++;
                    if (sn==-1)sn=e;
                    en=e;
                    
                }
                e++;
            }
            if (cnt%2==0){
                ans=max(ans,e-s);
            }
            else{
                
                ans=max(ans,e-(sn+1));
                ans=max(ans,en-s);
            }
            i=e+1;
        }
        return ans;
    }
};