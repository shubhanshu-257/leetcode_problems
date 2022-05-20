class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        int nsl[n];
        int nsr[n];
        stack<pair<int,int>>s;
        s.push({h[0],0});
        nsl[0]=-1;
        for (int i=1;i<n;i++){
            if (h[i]>s.top().first){
                nsl[i]=s.top().second;
                s.push({h[i],i});
            }
            else{
                while(!s.empty()){
                    if (h[i]>s.top().first){
                        nsl[i]=s.top().second;
                s.push({h[i],i});
                        break;
                    }
                    s.pop();
                }
                if (s.empty()){
                    nsl[i]=-1;
                    s.push({h[i],i});
                }
            }
        }
       while(!s.empty()){
           s.pop();
       }
        s.push({h[n-1],n-1});
        nsr[n-1]=n;
        for (int i=n-2;i>=0;i--){
            if (h[i]>s.top().first){
                nsr[i]=s.top().second;
                s.push({h[i],i});
            }
            else{
                while(!s.empty()){
                    if (h[i]>s.top().first){
                        nsr[i]=s.top().second;
                s.push({h[i],i});
                        break;
                    }
                    s.pop();
                }
                if (s.empty()){
                    nsr[i]=n;
                    s.push({h[i],i});
                }
            }
        }
        int y=0;
        for (int i=0;i<n;i++){
            y=max(y,(nsr[i]-nsl[i]-1)*h[i]);
        }
        return y;
    }
};