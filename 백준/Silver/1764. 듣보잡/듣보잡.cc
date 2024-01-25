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

    map<string, int> maps;
    vector<string> arr;

    int N, M;
    string name;
    cin >> N >> M;

    for (size_t i = 0; i < N; i++) {
        cin >> name;
        maps[name] = 1;
    }

    for (size_t i = 0; i < M; i++) {
        cin >> name;
        if (maps[name] == 1) {
            arr.push_back(name);
        }
    }

    sort(arr.begin(), arr.end());

    cout << arr.size() << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
    return 0;
}