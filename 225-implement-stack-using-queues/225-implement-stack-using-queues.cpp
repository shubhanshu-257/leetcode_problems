class MyStack {
public:
    queue<int>q1;
    MyStack() {
        
    }
    
    void push(int x) {
        
        q1.push(x);
        int y=q1.size();
        y--;
        while(q1.size()>=2 && y--){
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
        int x=q1.front();
        q1.pop();
        return x;
    }
    
    int top() {
        int x=q1.front();
        return x;
    }
    
    bool empty() {
        if (q1.empty()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */