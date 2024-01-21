#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

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
    sort(twoDimVec.begin(), twoDimVec.end());

    for (int i = 0; i < N; i++) {
        cout << twoDimVec[i][0] << " " << twoDimVec[i][1] << "\n";
    }

    return 0;
}
