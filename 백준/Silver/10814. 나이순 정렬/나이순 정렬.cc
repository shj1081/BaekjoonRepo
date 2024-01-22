#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 다른 compare 함수를 만들어서 정렬
bool cmp(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main() {
    // cin, cout 속도 향상
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    // N * 3 크기의 2차원 벡터 생성
    vector<pair<int, string> > arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    // stable_sort를 사용하여 정렬
    stable_sort(arr.begin(), arr.end(), cmp);

    for (int i = 0; i < N; i++) {
        cout << arr[i].first << " " << arr[i].second << "\n";
    }

    return 0;
}
