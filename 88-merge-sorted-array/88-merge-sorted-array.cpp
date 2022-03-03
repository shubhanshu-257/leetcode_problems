class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        vector<int>v;
        if (n!=0){
        
        while(i<m && j<n){
            if (i<m && nums1[i]<=nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            else{
                 v.push_back(nums2[j]);
                j++;
            }
        }
            if (i==m && j!=n){
                while(j<n){
                    v.push_back(nums2[j]);
                j++;
                }
            }
            if (i!=m && j==n){
                while(i<m){
                    v.push_back(nums1[i]);
                i++;
                }
            }
        nums1=v;}
    }
};