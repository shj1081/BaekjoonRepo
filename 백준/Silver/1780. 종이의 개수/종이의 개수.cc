#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int board[2188][2188];
int cnt[3] = {0, 0, 0};  // -1, 0, 1

void div_conq(int x, int y, int N) {
    bool isUniform = true;
    int firstVal = board[x][y];
    for (int i = x; i < x + N; i++) {
        for (int j = y; j < y + N; j++) {
            if (board[i][j] != firstVal) {
                isUniform = false;
                break;
            }
        }
        if (!isUniform) break;
    }
    if (isUniform) {
        if (firstVal == -1)
            cnt[0]++;
        else if (firstVal == 0)
            cnt[1]++;
        else if (firstVal == 1)
            cnt[2]++;
    } else {
        div_conq(x, y, N / 3);
        div_conq(x, y + N / 3, N / 3);
        div_conq(x, y + 2 * N / 3, N / 3);
        div_conq(x + N / 3, y, N / 3);
        div_conq(x + N / 3, y + N / 3, N / 3);
        div_conq(x + N / 3, y + 2 * N / 3, N / 3);
        div_conq(x + 2 * N / 3, y, N / 3);
        div_conq(x + 2 * N / 3, y + N / 3, N / 3);
        div_conq(x + 2 * N / 3, y + 2 * N / 3, N / 3);
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }

    div_conq(0, 0, N);

    for (int i = 0; i < 3; i++) {
        cout << cnt[i] << endl;
    }

    return 0;
}