#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

bool isPrime(long long n) {
    if (n < 2) {
        return false;
    }
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int M, N;
    cin >> M >> N;

    for (int i = M; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << "\n";
        }
    }

    return 0;
}