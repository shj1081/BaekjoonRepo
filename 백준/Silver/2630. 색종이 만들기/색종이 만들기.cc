#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int board[129][129];
int w_cnt = 0, b_cnt = 0;

void div_conq(int x, int y, int N) {
    int tmp_cnt = 0;
    for (int i = x; i < x + N; i++) {
        for (int j = y; j < y + N; j++) {
            // blue 개수 세기
            if (board[i][j]) {
                tmp_cnt++;
            }
        }
    }
    if (!tmp_cnt)
        w_cnt++;  // all white
    else if (tmp_cnt == N * N)
        b_cnt++;  // all blue
    else {
        div_conq(x, y, N / 2);                  // left top
        div_conq(x, y + N / 2, N / 2);          // right top
        div_conq(x + N / 2, y, N / 2);          // left bottom
        div_conq(x + N / 2, y + N / 2, N / 2);  // right bottom
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
        for (int j = 0; j < N; j++)
            cin >> board[i][j];
    }

    div_conq(0, 0, N);
    cout << w_cnt << endl
         << b_cnt << endl;

    return 0;
}