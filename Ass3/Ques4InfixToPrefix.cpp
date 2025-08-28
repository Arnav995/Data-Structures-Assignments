#include <iostream>
#include <stack>
#include <algorithm>
#include <cctype>
using namespace std;

// Function to get precedence of operators
int getPrecedence(char op) {
    if (op == '^') return 4;       // Highest precedence
    if (op == '*' || op == '/') return 3;
    if (op == '+' || op == '-') return 2;
    return 0; // for '(' or other characters
}

// Function to check if character is an operator
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

// Main function to convert infix to prefix
string infixToPrefix(string infix) {
    // Step 1: Reverse the infix expression
    reverse(infix.begin(), infix.end());
    
    // Step 2: Replace '(' with ')' and vice versa
    for (int i = 0; i < infix.length(); i++) {
        if (infix[i] == '(') infix[i] = ')';
        else if (infix[i] == ')') infix[i] = '(';
    }
    
    stack<char> st;
    string result = "";
    
    // Step 3: Convert modified expression to postfix
    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];
        
        // If operand (letter or digit), add to output
        if (isalnum(c)) {
            result += c;
        }
        // If '(', push to stack
        else if (c == '(') {
            st.push(c);
        }
        // If ')', pop until '(' is found
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop(); // Remove '(' from stack
        }
        // If operator
        else if (isOperator(c)) {
            // Pop operators with higher precedence
            while (!st.empty() && getPrecedence(st.top()) > getPrecedence(c)) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    
    // Pop all remaining operators
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    
    // Step 4: Reverse the result to get prefix
    reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    getline(cin, infix);
    
    string prefix = infixToPrefix(infix);
    cout << "Prefix expression: " << prefix << endl;
    
    return 0;
}