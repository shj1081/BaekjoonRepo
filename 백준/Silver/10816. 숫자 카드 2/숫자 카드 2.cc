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

    map<int, int> maps;
    vector<int> input;

    int N, M, num;
    cin >> N;

    for (size_t i = 0; i < N; i++) {
        cin >> num;
        maps[num] += 1;
    }

    cin >> M;
    for (size_t i = 0; i < M; i++) {
        cin >> num;
        input.push_back(num);
    }

    for (size_t i = 0; i < M; i++) {
        cout << maps[input[i]] << " ";
    }

    return 0;
}