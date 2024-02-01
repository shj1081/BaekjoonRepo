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
const int MAX = 15;
int put[MAX];  // index : 놓여진 row, value : 놓여진 col

bool isAvailPos(int currentRow) {
    for (size_t i = 0; i < currentRow; i++) {
        // currentRow와 같은 col에 놓여져 있거나, 같은 대각선상에 존재(row 차이 = col 차이) 하는 경우 불가
        if (put[i] == put[currentRow] || abs(put[currentRow] - put[i]) == (currentRow - i)) {
            return false;
        }
    }
    return true;
}
void nQueen(int currentRow) {
    // 퀸 N개인 경우에만 cnt ++
    if (currentRow == N) {
        cnt++;
        return;
    }

    for (size_t col = 0; col < N; col++) {
        put[currentRow] = col;  // 놓아보고

        if (isAvailPos(currentRow)) {  // 가능하면?
            nQueen(currentRow + 1);    // 다음 row 정하기
        }

        // 못놓으면 다음 col에 놓아보기 시도
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