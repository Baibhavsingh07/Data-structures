class MinStack {
public:
vector<pair<int,int>>a;
int m=INT_MAX;

    MinStack() {
        
    }
    
    void push(int val) {
        m=min(m,val);

        a.push_back({val,m});
    }
    
    void pop() {

        a.pop_back();
        if(a.size())
        m=a.back().second;
        else
        m=INT_MAX;
    }
    
    int top() {
        return (a.back()).first;
    }
    
    int getMin() {
        return (a.back().second);
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