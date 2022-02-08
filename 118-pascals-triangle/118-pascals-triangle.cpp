class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int> > v(n);
        v[0].push_back(1);
        n--;
        int i=1;
        while(n){
            v[i].push_back(v[i-1][0]);
            int x=v[i-1].size();
            for (int j=1;j<x;j++){
                v[i].push_back(v[i-1][j-1]+v[i-1][j]);
            }
            v[i].push_back(v[i-1][x-1]);
            n--;
            i++;
        }
        return v;
        
    }
};