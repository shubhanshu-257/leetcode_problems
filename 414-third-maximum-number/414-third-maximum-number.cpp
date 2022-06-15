class Solution {
public:
    int thirdMax(vector<int>& nums) {
    constexpr long long MIN_VAL = -1e14;
       long int max1=MIN_VAL;
       long int max2=MIN_VAL;
       long int max3=MIN_VAL;
        for (auto x:nums){
            if (x==max1 || x==max2 || x==max3){
                continue;
            }
            if (max1==MIN_VAL || x>max1){
                max3=max2;
                max2=max1;
                max1=x;
            }
            else if (max2==MIN_VAL || x>max2){
                max3=max2;
                max2=x;
            }
            else if (max3==MIN_VAL || x>max3){
                max3=x;
            }
        }
        if (max3==MIN_VAL){
            return max1;
        }
        return max3;
    }
};