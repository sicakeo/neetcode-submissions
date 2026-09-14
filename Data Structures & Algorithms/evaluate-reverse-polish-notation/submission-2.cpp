class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> intStack;
        for(int i = 0; i < tokens.size(); i++) {
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
                intStack.push(std::stoi(tokens[i]));
            else {
                int b = intStack.top();
                intStack.pop();
                int a = intStack.top();
                intStack.pop();
                intStack.push(compute(a,b,tokens[i][0]));
            }
        }

        return intStack.top();
    }

    int compute(int a, int b, char op) {
        switch(op) {
            case '+' : return a + b;
            case '-' : return a - b;
            case '*' : return a * b;
            case '/' : return a / b;
        }
        return 0;
    }
};
