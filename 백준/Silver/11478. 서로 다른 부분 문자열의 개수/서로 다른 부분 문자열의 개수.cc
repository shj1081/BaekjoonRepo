#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    set<string> set;

    cin >> str;

    for (size_t i = 1; i <= str.length(); i++) {
        for (size_t j = 0; j < str.length() - i + 1; j++) {
            set.insert(str.substr(j, i));
        }
    }

    cout << set.size();

    return 0;
}