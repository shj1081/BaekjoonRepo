#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    set<string> set = {};
    string str;
    int N;
    int cnt = 0;
    cin >> N;

    for (size_t i = 0; i < N; i++) {
        cin >> str;
        if (str == "ENTER") {
            cnt += set.size();
            set = {};
        } else {
            set.insert(str);
        }
    }
    cnt += set.size();

    cout << cnt;

    return 0;
}