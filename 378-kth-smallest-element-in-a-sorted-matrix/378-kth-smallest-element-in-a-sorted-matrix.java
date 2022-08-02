class Solution {
    public int bs(int[] mat, int m){
        int res=0;
        int l=0;
        int h=mat.length-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if (mat[mid]<m){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
            
        }
        return l;
    }
    public int kthSmallest(int[][] matrix, int k) {
       return Arrays.stream(matrix).flatMapToInt(Arrays::stream).sorted().toArray()[k - 1];
    }
}