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

    int N, k;
    queue<int> live;
    queue<int> death;

    cin >> N >> k;
    for (size_t i = 1; i <= N; i++) {
        live.push(i);
    }

    while (!live.empty()) {
        for (size_t i = 0; i < k - 1; i++) {
            live.push(live.front());
            live.pop();
        }
        death.push(live.front());
        live.pop();
    }

    cout << "<";
    for (size_t i = 0; i < N - 1; i++) {
        cout << death.front() << ", ";
        death.pop();
    }
    cout << death.front() << ">";

    return 0;
}