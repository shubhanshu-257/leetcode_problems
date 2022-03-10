class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int res=0;
        int start=0;
        int end=letters.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if (letters[mid]==target){
                if (mid+1==letters.size()){
                    res=0;
                    break;
                }
                res=mid+1;
                start=mid+1;
            }
            else if (letters[mid]<target){
                start=mid+1;
            }
            else{
                res=mid;
                end=mid-1;
            }
        }
        return letters[res];
    }
};