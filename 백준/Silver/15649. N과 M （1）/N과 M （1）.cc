#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

vector<bool> isChosen;
vector<int> res;

void backTrack(int N, int M, int index) {
    // 모두 선택했다면 출력
    if (index == M) {
        for (size_t i = 0; i < M; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (size_t i = 0; i < N; i++) {
        // 만약 num이 선택되지 않은 상태라면 선택하고 res에 추가
        if (!isChosen[i]) {
            isChosen[i] = true;
            res[index] = i + 1;
            backTrack(N, M, index + 1);  // num i가 선택된 경우를 재귀적으로 생각
            isChosen[i] = false;         // 다른 경우를 탐색하기 위해 선택하지 않은 상태로 되돌려주기
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;

    isChosen.resize(N);
    res.resize(M);

    backTrack(N, M, 0);

    return 0;
}