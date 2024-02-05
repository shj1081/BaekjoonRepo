#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
int cnt1 = 0, cnt2 = 0;
int dp[41];

int fib1(int n) {
    if (n == 1 or n == 2) {
        cnt1++;
        return 1;
    } else {
        return (fib1(n - 1) + fib1(n - 2));
    }
}

void fib2(int n) {
    dp[1] = dp[2] = 1;
    for (int i = 3; i <= n; i++) {
        cnt2++;
        dp[i] = dp[i - 1] + dp[i - 2];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    fib1(n);
    fib2(n);
    cout << cnt1 << " " << cnt2 << endl;

    return 0;
}