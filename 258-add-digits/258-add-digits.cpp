class Solution {
public:
    int sum(int n){
        int s=0;
        while(n){
            int x=n%10;
            s+=x;
            n=n/10;
        }
        return s;
    }
    int addDigits(int num) {
        while(1){
            if (num>=0 && num<=9){
                break;
            }
            num=sum(num);
        }
        return num;
    }
};