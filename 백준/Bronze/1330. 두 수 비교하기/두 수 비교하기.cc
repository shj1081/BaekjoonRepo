#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    if (a > b)
        cout << ">" << endl;
    else if (a < b)
        cout << "<" << endl;
    else
        cout << "==" << endl;

    return 0;
}