#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    int a[100][100], b[100][100], c[100][100] = {0};  // Initialize a, b, and c

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }

    cin >> m >> k;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++)
            cin >> b[i][j];
    }

    // matrix multiplication
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int l = 0; l < m; l++)
                c[i][j] += a[i][l] * b[l][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    return 0;
}