class MinStack {
public:
    MinStack() {
        
    }
    stack<long long> st;
    long long mini = INT_MAX;
    void push(int value) {
        if(st.empty()){
            st.push(value);
            mini = value;
        }
        else{
            if(mini <= value){
                st.push(value);
            }
            else{
                long long newVal = 2ll * value - mini;
                st.push(newVal);
                mini = value;
            }
        }
    }
    
    void pop() {
        long long x = st.top();
        st.pop();
        if(x < mini){
            mini = 2 * mini - x;
        }
    }
    
    int top() {
        if(st.top() < mini){
            return mini;
        }
        else{
            return st.top();
        }
    }
    
    int getMin() {
        return mini;
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