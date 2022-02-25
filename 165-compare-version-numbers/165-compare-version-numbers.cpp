class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n=version1.length();
        int m=version2.length();
        int i=0;
        int j=0;
        int n1=0;
        int n2=0;
        while(i<n || j<m){
            string s1="";
            string s2="";
            while(i<n && version1[i]!='.'){
                s1+=version1[i];
                i++;
            }
            while(j<m && version2[j]!='.'){
                s2+=version2[j];
                j++;
            }
            if (s1!=""){
                n1=stoi(s1);
            }
            if (s2!=""){
                n2=stoi(s2);
            }
            if (n1>n2){
                return 1;
            }
            else if (n1<n2){
                return -1;
            }
            n1=0;
            n2=0;
            i++;
            j++;
        }
        return 0;
    }
};