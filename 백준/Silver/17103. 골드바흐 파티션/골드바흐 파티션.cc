#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

const int MAX_NUM = 1000000;
int primeArr[MAX_NUM + 1] = {
    0,
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (size_t i = 2; i <= MAX_NUM; i++) {
        primeArr[i] = i;
    }

    // 에라토스테네스의 체
    for (int i = 2; i <= MAX_NUM; i++) {
        if (primeArr[i] == 0) {
            continue;
        }
        for (int j = i * 2; j <= MAX_NUM; j = j + i) {
            primeArr[j] = 0;
        }
    }

    int N, num, cnt;
    cin >> N;

    for (size_t i = 0; i < N; i++) {
        cin >> num;
        cnt = 0;

        for (size_t i = 2; i < num; i++) {
            if (primeArr[i] + primeArr[num - i] == num && i <= num - i) {
                cnt++;
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}