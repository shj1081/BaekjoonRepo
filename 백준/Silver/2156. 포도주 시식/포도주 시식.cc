#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int numOfWine;
    cin >> numOfWine;

    vector<int> wine(numOfWine + 1);
    vector<int> dp(numOfWine + 1);

    for (int i = 1; i <= numOfWine; i++) {
        cin >> wine[i];
    }

    dp[1] = wine[1];
    dp[2] = wine[1] + wine[2];

    for (int i = 3; i <= numOfWine; i++) {
        // 1. i번째 포도주를 마시지 않는 경우
        // 2. i번째 포도주를 마시고 i-1번째 포도주를 마시지 않는 경우
        // 3. i번째 포도주를 마시고 i-1번째 포도주를 마시고 i-2번째 포도주를 마시지 않는 경우
        dp[i] = max(dp[i - 1], max(dp[i - 2] + wine[i], dp[i - 3] + wine[i - 1] + wine[i]));
    }

    cout << dp[numOfWine] << endl;

    return 0;
}