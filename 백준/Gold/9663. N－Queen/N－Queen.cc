/*
N-Queen 문제의 경우 각 행에는 하나의 퀸만 올 수 있다는 조건을 생각하여
각 행에 퀸을 놓는 경우의 수를 따져보기
각 행에 해당하는 퀸을 백트래킹을 이용하여 풀기
*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int N, cnt = 0;
// col과 대각선 arr 2개, 총 3개의 arr를 이용해보기
bool isUsedCol[15];
bool isUsedUDiag[15 * 2 - 1];  // 오른쪽 위로 진행 (0,0) 시작
bool isUsedDDiag[15 * 2 - 1];  // 오른쪽 아래로 진행 (14,0) 시작

void nQueen(int currentRow) {
    if (currentRow == N) {
        cnt++;
        return;
    }

    for (size_t i = 0; i < N; i++) {
        // 대각선 계산 주의
        if (!isUsedCol[i] && !isUsedUDiag[i + currentRow] && !isUsedDDiag[N - i + currentRow]) {
            isUsedCol[i] = true;
            isUsedUDiag[i + currentRow] = true;
            isUsedDDiag[N - i + currentRow] = true;
            nQueen(currentRow + 1);
            isUsedCol[i] = false;
            isUsedUDiag[i + currentRow] = false;
            isUsedDDiag[N - i + currentRow] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    nQueen(0);
    cout << cnt;

    return 0;
}