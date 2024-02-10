#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int numOfStairs;
    vector<int> stairs(301, 0);
    vector<int> dp(301, 0);

    cin >> numOfStairs;
    for (int i = 1; i <= numOfStairs; i++) {
        cin >> stairs[i];
    }

    dp[1] = stairs[1];
    dp[2] = stairs[1] + stairs[2];
    for (int i = 3; i <= numOfStairs; i++) {
        dp[i] = max(dp[i - 2] + stairs[i], dp[i - 3] + stairs[i - 1] + stairs[i]);
    }

    cout << dp[numOfStairs] << endl;

    return 0;
}