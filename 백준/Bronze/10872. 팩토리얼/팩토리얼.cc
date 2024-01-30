#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    int res = 1;
    cin >> N;

    if (N == 0) {
        cout << 1;

    } else {
        for (size_t i = 1; i <= N; i++) {
            res *= i;
        }
        cout << res;
    }
}