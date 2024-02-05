#include <bits/stdc++.h>
#define endl '\n'
#define INT_MAX 2147483647

using namespace std;

int N, ans = INT_MAX;
int ability[21][21];
bool isStart[21];

void calc(int number, int nextPlayer) {
    // 팀이 다 나눠졌을 때
    if (number == N / 2) {
        int start = 0, link = 0;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (isStart[i] && isStart[j]) {
                    start += ability[i][j] + ability[j][i];
                } else if (!isStart[i] && !isStart[j]) {
                    link += ability[i][j] + ability[j][i];
                }
            }
        }
        // 능력치 차이의 최솟값 업데이트
        ans = min(ans, abs(start - link));
        return;
    }

    // start 팀에 선수 넣기
    for (int i = nextPlayer; i < N; i++) {
        isStart[i] = true;
        calc(number + 1, i + 1);
        isStart[i] = false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cin >> ability[i][j];
    }

    calc(0, 0);
    cout << ans << endl;

    return 0;
}