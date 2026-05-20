class MinStack {
private: 
    stack<int> mins;
    int min; 
    stack<int> minStack;
 

public:
    MinStack() {
        
    }
    
    void push(int val) {

        if (minStack.empty()) {
            min = val; 
            mins.push(val);
        } else {
            if (val <= min) {
                min = val;
                mins.push(val); 
            }
        }

        minStack.push(val);
        
    }
    
    void pop() {
        if (!minStack.empty()) {
            if (!mins.empty() && minStack.top() == mins.top()) {
                mins.pop();
            }

            minStack.pop();

        }
        
        
    }
    
    int top() {
        if (!minStack.empty()) return minStack.top();
        return -1;
    }
    
    int getMin() {

        if (!mins.empty()) return mins.top();
        return -1;

    }
};
