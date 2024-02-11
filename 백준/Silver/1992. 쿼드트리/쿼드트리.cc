#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int board[65][65];

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
        cout << "0";
    else if (tmp_cnt == N * N)
        cout << "1";

    else {
        cout << "(";
        div_conq(x, y, N / 2);                  // left top
        div_conq(x, y + N / 2, N / 2);          // right top
        div_conq(x + N / 2, y, N / 2);          // left bottom
        div_conq(x + N / 2, y + N / 2, N / 2);  // right bottom
        cout << ")";
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    string tmp;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        for (int j = 0; j < N; j++) {
            board[i][j] = tmp[j] - '0';
        }
    }

    div_conq(0, 0, N);

    return 0;
}