#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    int map[1025][1025] = {
        0,
    };
    int num;

    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= n; j++) {
            cin >> num;
            // i,j 까지 합 구하기 using DP
            map[i][j] = map[i - 1][j] + map[i][j - 1] + num - map[i - 1][j - 1];
        }
    }

    int x1, y1, x2, y2;

    for (int i = 0; i < m; i++) {
        int result = 0;
        cin >> x1 >> y1 >> x2 >> y2;

        // x1,y1 부터 x2,y2 까지 합 구하기
        result = map[x2][y2] - map[x1 - 1][y2] - map[x2][y1 - 1] + map[x1 - 1][y1 - 1];
        cout << result << '\n';
    }
}