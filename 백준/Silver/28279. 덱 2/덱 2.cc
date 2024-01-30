#include <algorithm>
#include <cmath>
#include <deque>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, cmd, num;
    deque<int> deque;  // 앞뒤로 push, pop이 필요한 경우 사용 (덱)

    cin >> N;

    for (size_t i = 0; i < N; i++) {
        cin >> cmd;

        switch (cmd) {
            case 1:
                cin >> num;
                deque.push_front(num);
                break;
            case 2:
                cin >> num;
                deque.push_back(num);
                break;
            case 3:
                if (deque.empty()) {
                    cout << -1 << "\n";
                } else {
                    cout << deque.front() << "\n";
                    deque.pop_front();
                }
                break;
            case 4:
                if (deque.empty()) {
                    cout << -1 << "\n";
                } else {
                    cout << deque.back() << "\n";
                    deque.pop_back();
                }
                break;
            case 5:
                cout << deque.size() << "\n";
                break;
            case 6:
                if (deque.empty()) {
                    cout << 1 << "\n";
                } else {
                    cout << 0 << "\n";
                }
                break;
            case 7:
                if (deque.empty()) {
                    cout << -1 << "\n";
                } else {
                    cout << deque.front() << "\n";
                }
                break;
            case 8:
                if (deque.empty()) {
                    cout << -1 << "\n";
                } else {
                    cout << deque.back() << "\n";
                }
                break;
        }
    }

    return 0;
}