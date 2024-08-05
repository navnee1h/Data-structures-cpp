#include <iostream>
#include <stack>
using namespace std;

// Function to get precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// Function to convert infix to postfix
void infixToPostfix(const string& infix) {
    stack<char> s; // Stack to store operators
    string postfix; // Resultant postfix expression

    for (char c : infix) {
        if (isalnum(c)) { // If the character is an operand
            postfix += c;
        } else if (c == '(') { // If the character is '('
            s.push(c);
        } else if (c == ')') { // If the character is ')'
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // Remove '(' from stack
        } else { // If the character is an operator
            while (!s.empty() && precedence(s.top()) >= precedence(c)) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    // Pop remaining operators from the stack
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    cout << "Postfix expression: " << postfix << endl;
}

int main() {
    string infix = "A+B*(C-D)";
    cout << "Infix expression: " << infix << endl;

    infixToPostfix(infix);

    return 0;
}
