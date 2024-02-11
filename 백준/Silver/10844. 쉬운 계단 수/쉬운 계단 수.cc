#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

const int MODULO = 1000000000;
const int MAX_NUM = 100;
int dp[MAX_NUM + 1][10];  // dp[length][last digit]

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, answer = 0;
    cin >> N;

    // 1자리 수
    dp[1][0] = 0;
    for (int digit = 1; digit <= 9; digit++) {
        dp[1][digit] = 1;
    }

    // 2자리 수 이상
    for (int length = 2; length <= N; length++) {
        // 0은 1만 인접
        dp[length][0] = dp[length - 1][1] % MODULO;
        // 1 ~ 8은 양쪽 인접
        for (int digit = 1; digit <= 8; digit++) {
            dp[length][digit] = (dp[length - 1][digit - 1] + dp[length - 1][digit + 1]) % MODULO;
        }
        // 9는 8만 인접
        dp[length][9] = dp[length - 1][8] % MODULO;
    }

    for (int digit = 0; digit <= 9; digit++) {
        answer = (answer + dp[N][digit]) % MODULO;
    }

    cout << answer << endl;

    return 0;
}