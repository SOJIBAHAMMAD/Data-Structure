class MyStack {
public:
    queue<int>q1;
    MyStack() {
        
    }
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        queue<int>q2;
        int val;
        while(!q1.empty()) {
            val=q1.front();
            q1.pop();
            if(q1.empty()) {
                break;
            }
            q2.push(val);
        }
        q1=q2;
        return val;
    }
    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        return q1.empty();
    }
};