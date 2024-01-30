#include <iostream>

using namespace std;

long long binomialCoefficient(long long N, long long k) {
    long long result = 1;
    for (long long i = 1; i <= k; i++) {
        result *= N - i + 1;
        result /= i;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long N, left, right;
    cin >> N;

    for (long long i = 0; i < N; i++) {
        cin >> left >> right;
        cout << binomialCoefficient(right, left) << "\n";
    }
    return 0;
}
