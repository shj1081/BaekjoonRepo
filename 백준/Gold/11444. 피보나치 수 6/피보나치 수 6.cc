#include <bits/stdc++.h>
#define endl '\n'
#define MOD 1000000007LL  // LL indicates long long

using namespace std;

map<long long, long long> fibonachiDP;

long long fibonachi(long long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;
    if (fibonachiDP.count(n)) return fibonachiDP[n];  // if n is already calculated, return it

    // n이 짝수인 경우
    if (n % 2 == 0) {
        long long m = n / 2;
        long long temp1 = fibonachi(m - 1);
        long long temp2 = fibonachi(m);
        fibonachiDP[n] = ((2LL * temp1 + temp2) * temp2) % MOD;
        return fibonachiDP[n];
    }
    // n이 홀수인 경우
    else {
        long long m = (n + 1) / 2;
        long long temp1 = fibonachi(m - 1);
        long long temp2 = fibonachi(m);
        fibonachiDP[n] = (temp1 * temp1 + temp2 * temp2) % MOD;
        return fibonachiDP[n];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    cout << fibonachi(n);

    return 0;
}