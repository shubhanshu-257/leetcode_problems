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
        int x= num%9;
        if (num==0){
            return 0;
        }
        if (x==0){
            return 9;
        }
        else{
            return x;
        }
    }
};