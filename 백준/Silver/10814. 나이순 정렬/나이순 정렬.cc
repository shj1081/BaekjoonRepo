#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 다른 compare 함수를 만들어서 정렬
bool cmp(vector<string> a, vector<string> b) {
    if (a[0] == b[0]) {
        return stoi(a[2]) < stoi(b[2]);
    } else {
        return stoi(a[0]) < stoi(b[0]);
    }
}

int main() {
    // cin, cout 속도 향상
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    // N * 3 크기의 2차원 벡터 생성
    vector<vector<string> > arr(N, vector<string>(3));

    for (int i = 0; i < N; i++) {
        cin >> arr[i][0] >> arr[i][1];
        arr[i][2] = to_string(i);
    }

    sort(arr.begin(), arr.end(), cmp);

    for (int i = 0; i < N; i++) {
        cout << arr[i][0] << " " << arr[i][1] << "\n";
    }

    return 0;
}
