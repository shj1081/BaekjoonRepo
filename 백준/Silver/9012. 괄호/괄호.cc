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

    int N;
    string str, ans;
    stack<char> stack;

    cin >> N;

    for (size_t i = 0; i < N; i++) {
        ans = "YES";
        stack = {};
        cin >>
            str;
        for (size_t i = 0; i < str.length(); i++) {
            if (str[i] == '(') {
                stack.push(str[i]);
            } else {
                if (stack.size() == 0) {
                    ans = "NO";
                    break;
                } else {
                    stack.pop();
                }
            }
        }
        if (!stack.empty()) {
            ans = "NO";
        }

        cout << ans << "\n";
    }

    return 0;
}