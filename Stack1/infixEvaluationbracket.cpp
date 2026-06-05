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
    
    string s = "(2+6)*4/8-3";
    stack<int> val;
    stack<char> op;

    for(int i = 0;i < s.length();i++) {
        if(s[i] >= 48 && s[i] <= 57) val.push(s[i] - 48);
        else if(op.size() == 0) op.push(s[i]);//
        
        // We will do the work of brackets first because we haven't defined any priority for this.
        else if(s[i] == '(') op.push(s[i]);
        else if(op.top() == '(') op.push(s[i]);
        else if(s[i] == ')') {
             while(op.size() > 0 && op.top() != '(') {
                char val2 = val.top();
                val.pop();
                char val1 = val.top();
                val.pop();
                char ans = solve(val1,val2,op.top());
                op.pop();
                val.push(ans);
            }
            op.pop();

        }
        else if(pri(s[i]) > pri(op.top())) op.push(s[i]);//We doing priority work because we have 
        
        else {
            while(op.size() > 0 && pri(op.top()) >= pri(s[i])) {
                char val2 = val.top();
                val.pop();
                char val1 = val.top();
                val.pop();
                char ans = solve(val1,val2,op.top());
                op.pop();
                val.push(ans);
            }
            op.push(s[i]);
        }
 
    }

    while(op.size() > 0) {
        char val2 = val.top();
        val.pop();
        char val1 = val.top();
        val.pop();
        char ans = solve(val1,val2,op.top());
        op.pop();
        val.push(ans);
    }

        cout << val.top() << endl;
        cout << (2+6)*4/8-3;



}