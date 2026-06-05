// Compute string s = "2*6*4/8-3";

#include<iostream>
#include<stack>

using namespace std; 

int solve(int val1,int val2,char ch) {

    if(ch == '+') return val1 + val2;
    else if(ch == '-') return val1 - val2;
    else if(ch == '*') return val1 * val2;
    else  return val1 / val2;
    return 0;
}

int pri(char ch) {
    if(ch == '+' || ch =='-') return 1;
    else return 2;
    return 0;
}

int main() {
    string s = "2*6*4/8-3";
    stack<int> val;
    stack<char> op;

    for(int i = 0;i < s.length();i++) {
        //Whenever we compare char with integer in directly compares it's ASCII value in C++
        if(s[i] >= 48 && s[i] <= 57) val.push(s[i] - 48);//Again, while comparing char to int it takes ASCII value of char
        else if(op.size() == 0 || pri(s[i]) > pri(op.top())) op.push(s[i]);
        else {/*
            Work,if the priority of operater at top of stack val is higher or equal to the current operator
            then we compute val1 op val 2 until the priority of current operator becomes high or stack becomes empty
            */
            while(op.size() > 0 && pri(op.top()) >= pri(s[i])) {
                int val2 = val.top();// top element of stack is val2 because it comes later in operation present in string s.
                val.pop();
                int val1 = val.top();
                val.pop();
                int ans = solve(val1,val2,op.top());
                op.pop();
                val.push(ans);
            }
            op.push(s[i]);// After doing all work of high priority operators which are present on left we push current operation 
        }
 
    }
    // Once we iterate over all string then there might be still operatoer in stack, we do the all work until it finally becomes empty and we find final answer in val stack.
    while(op.size() > 0) {
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1,val2,op.top());
        op.pop();
        val.push(ans);
    }

            cout << val.top();



}