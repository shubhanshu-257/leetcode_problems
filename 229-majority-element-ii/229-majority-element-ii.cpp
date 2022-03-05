class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        int nums1=INT_MIN;
        int nums2=INT_MIN;
        int c1=0;
        int c2=0;
        for (int i=0;i<n;i++){
            if (nums1==nums[i]){
                c1++;
            }
            else if (nums2==nums[i]){
                c2++;
            }
            else if (c1==0){
                nums1=nums[i];
                c1=1;
            }
            else if (c2==0){
                nums2=nums[i];
                c2=1;
            }
            else{
                c1--;
                c2--;
            }
        }
        int cnt1=0;
        int cnt2=0;
        for (int i=0;i<n;i++){
            if (nums1==nums[i]){
                cnt1++;
            }
            if (nums2==nums[i]){
                cnt2++;
            }
        }
        if (cnt1>n/3){
            v.push_back(nums1);
        }
        if (cnt2>n/3){
            v.push_back(nums2);
        }
        return v;
    }
};