#include <algorithm>  // pair 포함됨
#include <cmath>
#include <deque>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, num, target;
    cin >> N;
    deque<pair<int, int> > deque;

    for (int i = 0; i < N; i++) {
        cin >> num;
        deque.push_back({num, i + 1});
    }

    while (!deque.empty()) {
        target = deque.front().first;
        cout << deque.front().second << " ";
        deque.pop_front();
        // 왼쪽으로 이동 (pop_front 한순간 오른쪽 이동이나 다름없으므로 한번 더 왼쪽 이동)
        if (target < 0) {
            for (size_t i = 0; i < abs(target); i++) {
                deque.push_front(deque.back());
                deque.pop_back();
            }

        } 
        // 오른쪽으로 이동
        else {
            for (size_t i = 0; i < target - 1; i++) {
                deque.push_back(deque.front());
                deque.pop_front();
            }
        }
    }

    return 0;
}