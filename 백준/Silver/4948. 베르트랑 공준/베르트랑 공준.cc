#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

// bool isPrime(long long n) {
//     if (n < 2) {
//         return false;
//     }
//     for (long long i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

int arr[246913] = {
    0,
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    arr[1] = 1;
    for (int i = 2; i <= 246913; i++) {
        if (arr[i] == 1) {
            continue;
        }
        for (int j = i * 2; j <= 246913; j = j + i) {
            arr[j] = 1;
        }
    }

    int n, cnt;
    while (1) {
        cin >> n;
        cnt = 0;
        if (n == 0) {
            return 0;
        }
        for (int i = n + 1; i <= 2 * n; i++) {
            if (arr[i] == 0) {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}