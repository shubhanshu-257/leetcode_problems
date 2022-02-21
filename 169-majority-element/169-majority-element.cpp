class Solution {
public:
    int majorityElement(vector<int>& a) {
        int n =a.size();
        int ele=a[0];
        int cnt=1;
        for (int i=1;i<n;i++){
            
            if (a[i]==ele){
                cnt++;
            }
            else{
                cnt--;
            }
            if (cnt==0){
                ele=a[i];
                cnt=1;
            }
        }
        return ele;
    }
};