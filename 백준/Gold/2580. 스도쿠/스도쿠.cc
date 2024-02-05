#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int sudoku[81];

void solve(int idx) {
    // 마지막 칸까지 다 채웠을 때
    if (idx == 81) {
        for (int i = 0; i < 81; i++) {
            cout << sudoku[i] << " ";
            if (i % 9 == 8) {
                cout << "\n";
            }
        }
        exit(0);  // return이 안되는 경우가 있어서 exit으로 대체
    }

    // 이미 숫자가 채워져 있을 때
    if (sudoku[idx] != 0) {
        solve(idx + 1);
        return;
    }

    for (int i = 1; i <= 9; i++) {
        bool isPossible = true;
        int row = idx / 9;
        int col = idx % 9;

        // 같은 행, 열에 이미 숫자가 있는지 확인
        for (int j = 0; j < 9; j++) {
            if (sudoku[row * 9 + j] == i || sudoku[j * 9 + col] == i) {
                isPossible = false;
                break;
            }
        }

        // 3x3 칸에 이미 숫자가 있는지 확인
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        for (int j = startRow; j < startRow + 3; j++) {
            for (int k = startCol; k < startCol + 3; k++) {
                if (sudoku[j * 9 + k] == i) {
                    isPossible = false;
                    break;
                }
            }
        }

        if (isPossible) {
            sudoku[idx] = i;
            solve(idx + 1);
            sudoku[idx] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 81; i++) {
        cin >> sudoku[i];
    }

    solve(0);

    return 0;
}