#include <iostream>
#include <stack>
using namespace std;

bool isColorfulBracketSequence(const string &s) {
    stack<char> stk;

    for (char c : s) {
      if (c == '(' || c == '[' || c == '<') {
        stk.push(c);
      } else if (c == ')' || c == ']' || c == '>') {
        if (stk.empty()) {
          return false;
        }

        char top = stk.top();
            if ((c == ')' && top == '(') || (c == ']' && top == '[') || (c == '>' && top == '<')) {
                stk.pop();
            } else {
                return false;
            }
        }
    }
    return stk.empty();
}

int main() {
    string s;
    cin >> s;

    if (isColorfulBracketSequence(s)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

