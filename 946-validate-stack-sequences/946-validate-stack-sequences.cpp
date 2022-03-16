class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        int k=0;
        int n=pushed.size();
        for (int i=0;i<n;i++){
            s.push(pushed[i]);
            while(!s.empty()){
                int x=s.top();
                if (x==popped[k]){
                    s.pop();
                    k++;
                }
                else{
                    break;
                }
            }
            
        }
        if (s.empty()){
            return true;
        }
        return false;
    }
};