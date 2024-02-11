#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str1, str2;
    cin >> str1 >> str2;
    int len1 = str1.length();
    int len2 = str2.length();

    int dp[len1 + 1][len2 + 1];

    // initialize
    for (int i = 0; i <= len1; i++) {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= len2; i++) {
        dp[0][i] = 0;
    }

    // calculate LCS
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            // 문자가 같으면 대각선 위의 값 + 1
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;

            }
            // 문자가 다르면 왼쪽 또는 위의 값 중 큰 값
            else {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }

    cout << dp[len1][len2] << endl;
    return 0;
}