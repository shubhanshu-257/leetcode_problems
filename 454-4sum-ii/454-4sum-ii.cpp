class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n=nums1.size();
        int k = n*n;
        int a[k];
        unordered_map<int,int>mp;
        int p=0;
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                a[p]=nums1[i]+nums2[j];
                p++;
            }
        }
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                mp[nums3[i]+nums4[j]]++;
            }
        }
      //  cout<<mp.size();
        int cnt=0;
        for (int i=0;i<k;i++){
            if (mp.find(-a[i])!=mp.end()){
                if (mp[-a[i]]){
                    cnt+=mp[-a[i]];
                }
            }
        }
        return cnt;
        
    }
};