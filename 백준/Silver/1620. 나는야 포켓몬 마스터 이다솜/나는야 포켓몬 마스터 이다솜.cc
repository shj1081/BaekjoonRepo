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

    map<string, int> maps1;
    map<int, string> maps2;

    int N, M, num;
    string name, input;
    cin >> N >> M;

    for (size_t i = 0; i < N; i++) {
        cin >> name;
        maps1[name] = i + 1;
        maps2[i + 1] = name;
    }

    for (size_t i = 0; i < M; i++) {
        cin >> input;
        // input이 숫자인지 문자인지 확인
        if (input.find_first_not_of("0123456789") == string::npos) {
            cout << maps2[stoi(input)] << "\n";
        } else {
            cout << maps1[input] << "\n";
        }
    }

    return 0;
}