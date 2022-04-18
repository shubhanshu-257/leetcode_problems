class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        priority_queue <int, vector<int>, greater<int> > pq;
        for (int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        int k=0;
        int cnt=1;
        int x;
        int ans=0;
        while(!pq.empty()){
            if (k>=1){
                int y=pq.top();
               if ((x+1)==y){
                   cnt++;
                   ans=max(cnt,ans);
                   
               }
                else if (x==y){
                    ;
                }
                else{
                    cnt=1;
                }
            }
            x=pq.top();
            pq.pop();
            k++;
            ans=max(cnt,ans);
        }
        return ans;
    }
};