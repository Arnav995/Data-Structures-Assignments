#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        
        // If opening bracket, push corresponding closing bracket
        if (ch == '(' || ch == '[' || ch == '{') {
            if (ch == '(') st.push(')');
            else if (ch == '[') st.push(']');
            else if (ch == '{') st.push('}');
        }
        // If closing bracket
        else {
            // If stack is empty or top doesn't match current closing bracket
            if (st.empty() || st.top() != ch) {
                return false;
            }
            st.pop(); // Remove the matched closing bracket
        }
    }
    
    // If stack is empty, all brackets were matched
    return st.empty();
}

int main() {
    // Test cases
    string test1 = "()[]{}";      // Valid
    string test2 = "([{}])";      // Valid
    string test3 = "([)]";        // Invalid
    string test4 = "(]";          // Invalid
    string test5 = "({[()]})";    // Valid
    
    cout << test1 << " : " << (isValid(test1) ? "Valid" : "Invalid") << endl;
    cout << test2 << " : " << (isValid(test2) ? "Valid" : "Invalid") << endl;
    cout << test3 << " : " << (isValid(test3) ? "Valid" : "Invalid") << endl;
    cout << test4 << " : " << (isValid(test4) ? "Valid" : "Invalid") << endl;
    cout << test5 << " : " << (isValid(test5) ? "Valid" : "Invalid") << endl;
    
    return 0;
}