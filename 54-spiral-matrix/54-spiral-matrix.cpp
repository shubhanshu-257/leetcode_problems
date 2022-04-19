class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int sr=0;
        int sc=0;
        int er=n-1;
        int ec=m-1;
        int cnt=0;
        vector<int>v;
        while(cnt<n*m){
            for (int i=sr;i<=ec&& cnt<(n*m);i++){
                v.push_back(matrix[sr][i]);
                cnt++;
            }
            sr++;
            for (int i=sr;i<=er&& cnt<(n*m);i++){
                v.push_back(matrix[i][ec]);
                cnt++;
            }
            ec--;
            for(int i=ec;i>=sc&& cnt<(n*m);i--){
                v.push_back(matrix[er][i]);
                cnt++;
            }
            er--;
            for(int i=er;i>=sr&& cnt<(n*m);i--){
                v.push_back(matrix[i][sc]);
                cnt++;
            }
            sc++;
        }
        return v;
    }
};