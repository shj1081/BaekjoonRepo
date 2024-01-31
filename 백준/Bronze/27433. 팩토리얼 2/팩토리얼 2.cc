#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long N;
    long long res = 1;
    cin >> N;

    if (N < 2) {
        cout << 1;
    } else {
        for (long long i = 2; i <= N; i++) {
            res *= i;
        }
        cout << res;
    }

    return 0;
}
