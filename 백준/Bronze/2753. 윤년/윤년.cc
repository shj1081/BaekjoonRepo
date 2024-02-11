#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int currentYear;
    cin >> currentYear;

    if (currentYear % 4 == 0 && (currentYear % 100 != 0 || currentYear % 400 == 0)) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}