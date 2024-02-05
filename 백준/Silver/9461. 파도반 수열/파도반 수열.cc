/*
N개의 타일수열을 만드려면 N-1개의 타일수열에 1을 추가하거나 N-2개의 타일수열에 00을 추가
그러므로 피보나치 수열과 같은 규칙
*/

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
long long dp[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, num;

    dp[1] = dp[2] = dp[3] = 1;
    dp[4] = dp[5] = 2;

    for (size_t i = 6; i <= 100; i++) {
        dp[i] = dp[i - 1] + dp[i - 5];
    }

    cin >> n;
    for (size_t i = 0; i < n; i++) {
        cin >> num;
        cout << dp[num] << endl;
    }

    return 0;
}