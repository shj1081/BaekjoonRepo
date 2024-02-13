#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

long long N, B;
long long A[5][5];
long long temp[5][5];
long long ans[5][5];

// 배열 출력
void printMatrix(long long arr[5][5]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

// 행렬 곱셈
void multiplyMatrix(long long X[5][5], long long Y[5][5]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            temp[i][j] = 0;  // 행렬 초기화
            for (int k = 0; k < N; k++)
                temp[i][j] += (X[i][k] * Y[k][j]);

            // 1000으로 나눈 나머지를 저장
            temp[i][j] %= 1000;
        }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            X[i][j] = temp[i][j];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cin >> A[i][j];
        ans[i][i] = 1;  // 단위행렬(I)
    }

    while (B > 0) {
        // B가 홀수일 때 ans에 A를 곱해준다. (/=2 연산을 하기에)
        if (B % 2 == 1) {
            multiplyMatrix(ans, A);
        }
        // A를 제곱
        multiplyMatrix(A, A);
        // B를 2로 나눔
        B /= 2;
    }

    printMatrix(ans);
}