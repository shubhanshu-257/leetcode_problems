class MyQueue {
public:
    stack<int>s1,s2;
    MyQueue() {
        ;
    }
    
    void push(int x) {
        if (s1.size()==0){
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
           
        } s1.push(x);
    }
    
    int pop() {
        if (s2.size()==0){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }}
            int m = s2.top();
            s2.pop();
            return m;
        
    }
    
    int peek() {
        if (s2.size()==0){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }}
            int m = s2.top();
            return m;
        
    }
    
    bool empty() {
        if (s1.size()==0 && s2.size()==0){
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */