class MinStack {
public:
vector<int>a;
    MinStack() {
        
    }
    
    void push(int val) {
        a.push_back(val);
    }
    
    void pop() {
        a.pop_back();
    }
    
    int top() {
        return a.back();
    }
    
    int getMin() {
        int m=INT_MAX;
        for(auto x:a)
        m=min(m,x);

        return m;
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