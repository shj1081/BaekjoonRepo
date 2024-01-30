#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unordered_set<string> set = {};
    string str;
    int N;
    int cnt = 0;
    cin >> N;

    for (size_t i = 0; i < N; i++) {
        cin >> str;
        if (str == "ENTER") {
            cnt += set.size();
            set = unordered_set<string>{}; // clear함수 사용 시 저격 데이터로 인해 시간초과 날 수 있음
        } else {
            set.insert(str);
        }
    }
    cnt += set.size();

    cout << cnt;

    return 0;
}