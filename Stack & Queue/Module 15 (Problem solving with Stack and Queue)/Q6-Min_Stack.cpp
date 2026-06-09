/*
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:
1.MinStack() initializes the stack object.
2.void push(int val) pushes the element val onto the stack.
3.void pop() removes the element on the top of the stack.
4.int top() gets the top element of the stack.
5.int getMin() retrieves the minimum element in the stack.
You must implement a solution with O(1) time complexity for each function.
*/

class MinStack {
public:
    stack<int>st;
    stack<int>min_st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(min_st.empty()) {
            min_st.push(val);
        } else {
            if(min_st.top() >= st.top()) {
                min_st.push(val);
            }
        }
    }
    
    void pop() {
       if(min_st.top()==st.top()) {
          min_st.pop();
       }
       st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};