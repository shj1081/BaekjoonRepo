#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    // set을 이용한 풀이
    set<string> set;
    vector<string> arr;

    int N, M;
    int cnt = 0;
    string name;

    cin >> N >> M;

    for (size_t i = 0; i < N; i++) {
        cin >> name;
        set.insert(name);
    }

    for (size_t i = 0; i < M; i++) {
        cin >> name;
        if (set.find(name) != set.end()) {
            arr.push_back(name);
            cnt++;
        }
    }

    sort(arr.begin(), arr.end());

    cout << cnt << endl;
    for (size_t i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
    return 0;
}