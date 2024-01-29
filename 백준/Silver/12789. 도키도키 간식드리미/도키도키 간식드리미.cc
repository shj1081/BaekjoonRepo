#include <algorithm>
#include <cmath>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, num;
    int enter = 1;
    stack<int> stack;
    cin >> N;

    for (size_t i = 0; i < N; i++) {
        cin >> num;
        if (num == enter) {
            enter++;
        } else {
            stack.push(num);
        }

        while (!stack.empty() && stack.top() == enter) {
            enter++;
            stack.pop();
        }
    }

    if (enter == N + 1) {
        cout << "Nice";
    } else {
        cout << "Sad";
    }
    return 0;
}