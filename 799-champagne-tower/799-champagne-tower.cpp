class Solution {
public:
    double max(double a,double b){
        if (a>b){
            return a;
        }
        return b;
    }
    double min(double a,double b){
        if (a<b){
            return a;
        }
        return b;
    }
    double champagneTower(int p, int qr, int qg) {
        if (p<=0){
            return 0.000;
        }
        vector<double>v;
        
        v.push_back(p);
       int k=1;
        int y=qr;
        while(qr>0){
            vector<double>v1;
            v1.push_back(max(0,(v[0]-1)/2));
            for (int i=1;i<v.size();i++){
                v1.push_back(max(0,max(0,(v[i-1]-1)/2)+max(0,(v[i]-1)/2)));
            }
            v1.push_back(max(0,(v[0]-1)/2));
            v=v1;
            qr--;
            k++;
        }
        return min(1,v[qg]);
        
    }
};