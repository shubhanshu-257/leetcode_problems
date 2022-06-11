class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int>l;
        vector<int>r;
        stack<pair<int,int>>st;
        int n=heights.size();
        for (int i=0;i<n;i++){
            while(!st.empty() && st.top().first>=heights[i]){
                st.pop();
            }
            if (st.size()==0){
                l.push_back(-1);
            }
            else{
                l.push_back(st.top().second);
            }
            st.push({heights[i],i});
        }
        while(!st.empty()){
            st.pop();
        }
        for (int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().first>=heights[i]){
                st.pop();
            }
            if (st.size()==0){
                r.push_back(n);
            }
            else{
                r.push_back(st.top().second);
            }
            st.push({heights[i],i});
        }
        reverse(r.begin(),r.end());
        int x=0;
        for (int i=0;i<n;i++){
            x=max(x,(r[i]-l[i]-1)*heights[i]);
        }
        return x;
    }
};