//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Stack {
//private:
//    char arr[100];
//    int top;
//
//public:
//    Stack() {
//        top = -1;
//    }
//
//    void push(char x) {
//        arr[++top] = x;
//    }
//
//    char pop() {
//        return arr[top--];
//    }
//
//    char peek() {
//        return arr[top];
//    }
//
//    bool isEmpty() {
//        return top == -1;
//    }
//};
//
//void reverseString(string str) {
//    Stack s;
//
//    for (int i = 0; i < str.length(); i++)
//        s.push(str[i]);
//
//    cout << "Reversed: ";
//    while (!s.isEmpty())
//        cout << s.pop();
//
//    cout << endl;
//}
//
//bool isBalanced(string exp) {
//    Stack s;
//
//    for (int i = 0; i < exp.length(); i++) {
//        if (exp[i] == '(')
//            s.push('(');
//        else if (exp[i] == ')') {
//            if (s.isEmpty())
//                return false;
//            s.pop();
//        }
//    }
//
//    return s.isEmpty();
//}
//
//int precedence(char op) {
//    if (op == '+' || op == '-') return 1;
//    if (op == '*' || op == '/') return 2;
//    return 0;
//}
//
//void infixToPostfix(string exp) {
//    Stack s;
//    string result = "";
//
//    for (int i = 0; i < exp.length(); i++) {
//
//        if (isalnum(exp[i])) {
//            result += exp[i];
//        }
//        else if (exp[i] == '(') {
//            s.push('(');
//        }
//        else if (exp[i] == ')') {
//            while (!s.isEmpty() && s.peek() != '(') {
//                result += s.pop();
//            }
//            s.pop();
//        }
//        else {
//            while (!s.isEmpty() && precedence(s.peek()) >= precedence(exp[i])) {
//                result += s.pop();
//            }
//            s.push(exp[i]);
//        }
//    }
//
//    while (!s.isEmpty()) {
//        result += s.pop();
//    }
//
//    cout << "Postfix: " << result << endl;
//}
//
//int main() {
//
//    string str = "Hello";
//    cout << "Original: " << str << endl;
//    reverseString(str);
//
//    string exp1 = "((a+b)*c)";
//    string exp2 = "((a+b)";
//
//    cout << endl;
//    cout << exp1 << " -> " << (isBalanced(exp1) ? "Balanced" : "Not Balanced") << endl;
//    cout << exp2 << " -> " << (isBalanced(exp2) ? "Balanced" : "Not Balanced") << endl;
//
//    cout << endl;
//    string infix = "(a+b)*c";
//    cout << "Infix: " << infix << endl;
//    infixToPostfix(infix);
//
//    return 0;
//}