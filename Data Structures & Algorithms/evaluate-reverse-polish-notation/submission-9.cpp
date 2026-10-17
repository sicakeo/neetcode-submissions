class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stack;
        for(string str : tokens) {
            if(str!= "+" && str!= "-" && str!= "*" && str!= "/") {
                stack.push(std::stoi(str));
            } else {
                int b = stack.top();
                stack.pop();
                int a = stack.top();
                stack.pop();
                stack.push(compute(a, b, str[0]));
            }
           
        }
        return stack.top();
    }

    int compute(int a, int b, char op) {
        switch(op) {
            case '+': return a + b;
            case '-': return a - b;
            case '*': return a * b;
            case '/': return a / b;
        }
        
        return 1;
    }
};
