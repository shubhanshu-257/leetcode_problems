class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        unordered_map<int,int>mp;
        stack<int>st;
        for (int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if (st.size()==0){
                mp[nums2[i]]=-1;
            }
            else{
                mp[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }
        for (int i=0;i<nums1.size();i++){
            if (mp.find(nums1[i])!=mp.end()){
                v.push_back(mp[nums1[i]]);
            }
            else{
                v.push_back(-1);
            }
        }
        return v;
    }
};