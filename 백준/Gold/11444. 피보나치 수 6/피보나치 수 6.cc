#include <bits/stdc++.h>
#define endl '\n'
#define MOD 1000000007LL

using namespace std;

long long side = 2, N;
long long A[2][2] = {{1, 1}, {1, 0}};
long long temp[2][2];
long long ans[2][2] = {{1, 0}, {0, 1}};  // Initialize ans with identity matrix

// 행렬 곱셈
void multiplyMatrix(long long X[2][2], long long Y[2][2]) {
    for (int i = 0; i < side; i++)
        for (int j = 0; j < side; j++) {
            temp[i][j] = 0;  // 행렬 초기화
            for (int k = 0; k < side; k++)
                temp[i][j] += (X[i][k] * Y[k][j]);

            temp[i][j] %= MOD;
        }

    for (int i = 0; i < side; i++)
        for (int j = 0; j < side; j++)
            X[i][j] = temp[i][j];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    while (N > 0) {
        if (N % 2 == 1) {
            multiplyMatrix(ans, A);
        }
        multiplyMatrix(A, A);
        N /= 2;
    }

    cout << ans[0][1] << endl;
    return 0;
}