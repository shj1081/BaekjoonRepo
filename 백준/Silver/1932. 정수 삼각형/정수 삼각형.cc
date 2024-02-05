#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

long long int dp[501][501];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < i + 1; j++)
            cin >> dp[i][j];

    for (int i = n - 1; i >= 1; i--)
        for (int j = 0; j < i; j++)
            dp[i - 1][j] += max(dp[i][j], dp[i][j + 1]);

    cout << dp[0][0] << endl;

    return 0;
}