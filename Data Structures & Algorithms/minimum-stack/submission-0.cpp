class MinStack {  
private:
    std::stack<int> stck;
    std::stack<int> minStack;
public:
    MinStack() {
    }
    
    void push(int val) {
        stck.push(val);
        val = std::min(val, minStack.empty() ? val : minStack.top());
        minStack.push(val);
    }
    
    void pop() {
        minStack.pop();
        stck.pop();
    }
    
    int top() {
        return stck.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
