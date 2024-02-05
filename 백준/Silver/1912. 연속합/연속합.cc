#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
int numArr[1000001];
int dp[1000001];  // 길이 i의 최대 합 (i번째 수를 포함하는 경우)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (size_t i = 1; i <= n; i++) {
        cin >> numArr[i];
    }

    dp[1] = numArr[1];
    int maxResult = dp[1];
    for (size_t i = 2; i <= n; i++) {
        dp[i] = max(dp[i - 1] + numArr[i], numArr[i]);
        maxResult = max(maxResult, dp[i]);
    }

    cout << maxResult << endl;

    return 0;
}