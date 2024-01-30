#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<string, int> map;
    string name1, name2;
    int res = 0;
    map["ChongChong"] = 1;

    int N;
    cin >> N;

    for (size_t i = 0; i < N; i++) {
        cin >> name1 >> name2;
        map[name1] = map[name1] || map[name2];
        map[name2] = map[name1] || map[name2];
    }

    for (auto iter = map.begin(); iter != map.end(); iter++) {
        res += (*iter).second;
    }
    cout << res;

    return 0;
}