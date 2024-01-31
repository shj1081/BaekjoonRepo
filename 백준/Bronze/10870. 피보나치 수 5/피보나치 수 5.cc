#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

long long int fib(long long int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int N;
    cin >> N;

    cout << fib(N);

    return 0;
}
