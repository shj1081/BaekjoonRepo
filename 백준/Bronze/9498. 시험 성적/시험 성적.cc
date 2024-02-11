#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testScore;
    cin >> testScore;

    if (testScore >= 90)
        cout << "A" << endl;
    else if (testScore >= 80)
        cout << "B" << endl;
    else if (testScore >= 70)
        cout << "C" << endl;
    else if (testScore >= 60)
        cout << "D" << endl;
    else
        cout << "F" << endl;

    return 0;
}