#include <algorithm>
#include <cmath>
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, num;
    string command;
    queue<int> queue;

    cin >> N;

    for (size_t i = 0; i < N; i++) {
        cin >> command;
        if (command == "push") {
            cin >> num;
            queue.push(num);
        } else if (command == "pop") {
            if (queue.empty()) {
                cout << -1 << "\n";
            } else {
                cout << queue.front() << "\n";
                queue.pop();
            }
        } else if (command == "size") {
            cout << queue.size() << "\n";
        } else if (command == "empty") {
            if (queue.empty()) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else if (command == "front") {
            if (queue.empty()) {
                cout << -1 << "\n";
            } else {
                cout << queue.front() << "\n";
            }

        } else if (command == "back") {
            if (queue.empty()) {
                cout << -1 << "\n";
            } else {
                cout << queue.back() << "\n";
            }
        }
    }

    return 0;
}