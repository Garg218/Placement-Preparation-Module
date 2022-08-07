class MinStack {
public:
    stack<long long> st;
    long long mini=INT_MAX;
    MinStack() {
        while(!st.empty())
            st.pop();
    }
    
    void push(int val) {
        if(st.empty())
        {
            st.push(val);
            mini=val;
        }
        else
        {
            long long v=val;
            if(v<mini)
            {
                
                st.push(2*v*1ll-mini);
                mini=v;
            }
            else
                st.push(v);
        }
    }
    
    void pop() {
        if(st.top()>mini)
            st.pop();
        else
        {
            long long ele=st.top();
            mini=2*mini-ele;
            st.pop();
        }
    }
    
    int top() {
        if(st.top()<mini)
            return mini;
        return st.top();
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
