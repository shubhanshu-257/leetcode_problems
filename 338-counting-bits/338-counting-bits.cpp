class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        v.push_back(0);
        int k=0;
        for (int i=1;i<=n;i++){
            int x=log2(i);
            double y=log2(i);
            if (y-x==0){
                k=0;
            }
            v.push_back(v[k]+1);
            k++;
        }
        return v;
    }
};