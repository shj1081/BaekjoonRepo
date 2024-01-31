#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<char> > vec;

void star(int x, int y, int size) {
    if (size == 1) {
        vec[x][y] = '*';
        return;
    }

    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 3; j++) {
            // 9분할 하여 가운데 부분은 공백으로 처리
            if (i == 1 && j == 1) {
                continue;
            }

            // 나머지 부분은 재귀 호출
            else {
                star(x + i * size / 3, y + j * size / 3, size / 3);
            }
        }
    }
}

int main() {
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    // N * N 으로 vector resize
    vec.resize(N, vector<char>(N, ' '));

    star(0, 0, N);

    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < N; j++) {
            cout << vec[i][j];
        }
        cout << '\n';
    }

    return 0;
}