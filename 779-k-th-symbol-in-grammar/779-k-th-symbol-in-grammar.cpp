class Solution {
public:
    int kthGrammar(int n, int k) {
        if (n==1){
            return 0;
        }
        int x=pow(2,n-1);
        if (k>x/2){
            return !kthGrammar(n-1,k-x/2);
        }
        else{
            return kthGrammar(n-1,k);
        }
    }
};