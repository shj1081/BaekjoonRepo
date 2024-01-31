#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool cmp(const pair<string, int> a, const pair<string, int> b) {
    if (a.second != b.second) {
        return a.second > b.second;
    } else if (a.first.length() != b.first.length()) {
        return a.first.length() > b.first.length();
    } else {
        return a.first < b.first;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    string str;
    unordered_map<string, int> map;
    cin >> N >> M;

    for (size_t i = 0; i < N; i++) {
        cin >> str;
        if (str.length() >= M) {
            map[str]++;
        }
    }

    vector<pair<string, int> > vec(map.begin(), map.end());
    sort(vec.begin(), vec.end(), cmp);

    for (auto it = vec.begin(); it != vec.end(); it++) {
        cout << it->first << "\n";
    }

    return 0;
}
