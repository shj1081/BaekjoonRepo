#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 다른 compare 함수를 만들어서 정렬
bool cmp(vector<int> a, vector<int> b) {
    if (a[1] == b[1]) {
        return a[0] < b[0];
    } else {
        return a[1] < b[1];
    }
}

int main() {
    // cin, cout 속도 향상
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<vector<int> > twoDimVec(N, vector<int>(2, 0));

    for (int i = 0; i < N; i++) {
        cin >> twoDimVec[i][0];
        cin >> twoDimVec[i][1];
    }

    // 기본적으로 사전식 정렬
    sort(twoDimVec.begin(), twoDimVec.end(), cmp);

    for (int i = 0; i < N; i++) {
        cout << twoDimVec[i][0] << " " << twoDimVec[i][1] << "\n";
    }

    return 0;
}
