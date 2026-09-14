class MinStack {
private:
    std::stack<long> stck;
    long min;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(stck.empty()) {
            stck.push(0);
            min = val;
        }
        else {
            stck.push(val - min);
            if ( val < min) min = val;
        }
    }
    
    void pop() {
        if (stck.empty()) return;

        long pop = stck.top();
        stck.pop();

        if (pop < 0) min = min - pop;
    }
    
    int top() {
        long top = stck.top();
        return (top > 0) ? (top + min) : (int)min;
    }
    
    int getMin() {
        return (int)min;
    }
};
