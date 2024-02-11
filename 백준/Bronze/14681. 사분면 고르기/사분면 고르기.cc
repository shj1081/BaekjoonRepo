#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x_coor, y_coor;

    cin >> x_coor >> y_coor;

    if (x_coor > 0 && y_coor > 0) {
        cout << 1 << endl;
    } else if (x_coor < 0 && y_coor > 0) {
        cout << 2 << endl;
    } else if (x_coor < 0 && y_coor < 0) {
        cout << 3 << endl;
    } else {
        cout << 4 << endl;
    }

    return 0;
}