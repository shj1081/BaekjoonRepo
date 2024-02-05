/*
N개의 타일수열을 만드려면 N-1개의 타일수열에 1을 추가하거나 N-2개의 타일수열에 00을 추가
그러므로 피보나치 수열과 같은 규칙
*/

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
int dp[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
    }

    cout << dp[n] << endl;

    return 0;
}