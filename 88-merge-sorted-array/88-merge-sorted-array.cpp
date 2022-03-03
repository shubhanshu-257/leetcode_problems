class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int gap=(((m+n))/2);
        if ((m+n)%2!=0){
            gap++;
        }
        int k=0;
        for (int i=m;i<(m+n);i++){
            nums1[i]=nums2[k];
            k++;
        }
        int l1=0;
        int l2=0;
        while(gap>0){
            l2=gap + l1;
            while(l2<(m+n)){
                if (nums1[l1]>nums1[l2]){
                    swap(nums1[l1],nums1[l2]);
                }
                l1++;
                l2++;
            }
            if (gap%2!=0 && gap!=1){
                gap=((gap)/2)+1;
            }
            else{
                gap=((gap)/2);
            }
            
            
            l1=0;
            
        }
    }
};