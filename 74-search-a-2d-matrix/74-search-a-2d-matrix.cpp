class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        int n=matrix.size();
        int m=matrix[0].size();
        //cout<<m;
        int lo=0;
        int hi=n-1;
        int k=0;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if (matrix[mid][0]>t){
                hi=mid-1;
            }
            else if (matrix[mid][0]<t){
                lo=mid+1;
            }
            else{
                lo= mid;
                k=1;
                break;
            }
        }
        if (k!=1){
            if (lo){
            lo--;}
        }
        
        int l=0;
        int h=m-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if (matrix[lo][mid]>t){
                h=mid-1;
            }
            else if (matrix[lo][mid]<t){
                l=mid+1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};