class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        vector<int>v;
        unordered_map<int,int>mp;
        int n=nums2.size();
        int x=nums2[n-1];
        s.push(x);
        mp[x]=-1;
        for (int i=n-2;i>=0;i--){
            if (nums2[i]<s.top()){
                mp[nums2[i]]=s.top();
                s.push(nums2[i]);
            }
            else{
                while(!s.empty()){
                    if (nums2[i]<s.top()){
                        mp[nums2[i]]=s.top();
                s.push(nums2[i]);
                        break;
                    }
                    s.pop();
                }
                if (s.empty()){
                    mp[nums2[i]]=-1;
                    s.push(nums2[i]);
                }
            }
        }
        for (int i=0;i<nums1.size();i++){
            v.push_back(mp[nums1[i]]);
        }
        return v;
    }
};