#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

// W로 시작하는 체스판을 기준으로 다시 칠해야 하는 칸의 개수
int W_DP[2001][2001] = {
    0,
};

// B로 시작하는 체스판을 기준으로 다시 칠해야 하는 칸의 개수
int B_DP[2001][2001] = {
    0,
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M, K;
    string str;
    cin >> N >> M >> K;

    for (int i = 1; i <= N; i++) {
        cin >> str;
        for (int j = 1; j <= M; j++) {
            W_DP[i][j] = W_DP[i - 1][j] + W_DP[i][j - 1] - W_DP[i - 1][j - 1];
            B_DP[i][j] = B_DP[i - 1][j] + B_DP[i][j - 1] - B_DP[i - 1][j - 1];

            if ((i + j) % 2 == 0) {
                if (str[j - 1] == 'B') {
                    W_DP[i][j]++;
                } else {
                    B_DP[i][j]++;
                }
            } else {
                if (str[j - 1] == 'W') {
                    W_DP[i][j]++;
                } else {
                    B_DP[i][j]++;
                }
            }
        }
    }

    int answer = 987654321;

    for (int i = K; i <= N; i++) {
        for (int j = K; j <= M; j++) {
            int W = W_DP[i][j] - W_DP[i - K][j] - W_DP[i][j - K] + W_DP[i - K][j - K];
            int B = B_DP[i][j] - B_DP[i - K][j] - B_DP[i][j - K] + B_DP[i - K][j - K];
            answer = min(answer, min(W, B));
        }
    }

    cout << answer << endl;

    return 0;
}
