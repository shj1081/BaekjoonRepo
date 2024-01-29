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
    queue<int> queue;

    cin >> N;
    for (size_t i = 1; i <= N; i++) {
        queue.push(i);
    }

    for (size_t i = 0; i < N - 1; i++) {
        queue.pop();
        queue.push(queue.front());
        queue.pop();
    }

    cout << queue.front();

    return 0;
}