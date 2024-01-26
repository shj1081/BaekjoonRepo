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

    map<string, string, greater<string> > maps;  // 이름 내림차순으로
    int N;
    string name, status;
    cin >> N;

    for (size_t i = 0; i < N; i++) {
        cin >> name >> status;
        maps[name] = status;
    }

    map<string, string>::iterator iter;
    for (iter = maps.begin(); iter != maps.end(); iter++) {
        if (iter->second == "enter") {
            cout << iter->first << "\n";
        }
    }

    return 0;
}