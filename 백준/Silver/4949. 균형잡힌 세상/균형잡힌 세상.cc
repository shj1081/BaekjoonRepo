#include <algorithm>
#include <cmath>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str, ans;
    stack<char> stack;

    while (1) {
        stack = {};  // empty stack
        getline(cin, str);
        ans = "yes";

        // termination condition
        if (str == ".") {
            break;
        }

        for (size_t i = 0; i < str.length(); i++) {
            if (str[i] == '(') {
                stack.push('(');
            }
            if (str[i] == '[') {
                stack.push('[');
            }

            if (str[i] == ')') {
                if (stack.empty() || stack.top() != '(') {
                    ans = "no";
                    break;
                } else {
                    stack.pop();
                }
            }
            if (str[i] == ']') {
                if (stack.empty() || stack.top() != '[') {
                    ans = "no";
                    break;
                } else {
                    stack.pop();
                }
            }
        }
        if (!stack.empty()) {
            ans = "no";
        }
        cout << ans << "\n";
    }

    return 0;
}