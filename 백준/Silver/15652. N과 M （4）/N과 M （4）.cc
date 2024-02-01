#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

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
        if (index == 0 || res[index - 1] <= i + 1) {  // 오름차순으로 출력하기 위해 (|| 연산은 앞이 참이면 뒤는 보지 않음)
            res[index] = i + 1;
            backTrack(N, M, index + 1);  // num i가 선택된 경우를 재귀적으로 생각
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;

    res.resize(M);

    backTrack(N, M, 0);

    return 0;
}