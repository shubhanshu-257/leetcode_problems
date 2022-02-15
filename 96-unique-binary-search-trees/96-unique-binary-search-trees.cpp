class Solution {
public:
    int numTrees(int n) {
        long long int x=1;
        long long int y=1;
        
        for (int i=n;i>=(2);i--){
            y*=i;
        }
        int k=1;
        for (int i=2*n;i>=(n+2);i--){
            x*=i;
            if (x>y){
                if (x%y==0 && k==1){
                    x=x/y;
                    k=0;
                }
                else if (k==1){
                    for (int j=2;j<=n;j++){
                        if (x%j==0 && y%j==0){
                            x=x/j;
                            y=y/j;
                        }
                    }
                }
            }
        }
        return x;
    }
};