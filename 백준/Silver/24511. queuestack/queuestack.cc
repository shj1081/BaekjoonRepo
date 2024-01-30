#include <algorithm>  // pair 포함됨
#include <cmath>
#include <deque>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, num;
    // stack은 무시되고 queue들을 이어붙이면 하나의 긴 queue가 됨
    deque<int> deque;
    int length = 0;

    cin >> N;
    int kind[N];

    for (size_t i = 0; i < N; i++) {
        cin >> kind[i];
    }

    for (size_t i = 0; i < N; i++) {
        cin >> num;
        if (kind[i] == 0) {
            deque.push_back(num);
        }
    }

    cin >> M;
    for (size_t i = 0; i < M; i++) {
        cin >> num;
        deque.push_front(num);
        cout << deque.back() << " ";
        deque.pop_back();
    }

    return 0;
}