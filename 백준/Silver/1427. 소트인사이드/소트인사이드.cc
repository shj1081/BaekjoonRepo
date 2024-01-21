#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // cin, cout 속도 향상
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    // count sort
    vector<int> v(10);
    fill(v.begin(), v.end(), 0);

    for (int i = 0; i < s.length(); ++i) {
        // char to int
        v[s[i] - '0']++;
    }

    // output (desc)
    for (int i = 9; i >= 0; --i) {
        for (int j = 0; j < v[i]; ++j) {
            cout << i;
        }
    }

    return 0;
}
