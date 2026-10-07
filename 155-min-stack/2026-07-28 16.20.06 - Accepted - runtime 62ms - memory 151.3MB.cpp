class MinStack {
public:
    stack<int> st;
    stack<int> minval;
    MinStack() {
       
    }
    
    void push(int value) {
        st.push(value);
        if(minval.empty() || value<=minval.top()){
            minval.push(value);}
    }
    
    void pop() {
        if(st.top()==minval.top()){
            minval.pop();
        }
        st.pop();
        
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {     
        return minval.top();   
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */