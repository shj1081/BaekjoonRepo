#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<string, int> arr;

    int N, M;
    int cnt = 0;
    string str;

    cin >> N >> M;

    for (size_t i = 0; i < N; i++) {
        cin >> str;
        arr[str] = 1;
    }

    for (size_t i = 0; i < M; i++) {
        cin >> str;
        cnt += arr[str];
    }

    cout << cnt;

    return 0;
}