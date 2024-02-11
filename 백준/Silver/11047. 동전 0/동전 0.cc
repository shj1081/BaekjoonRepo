#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

vector<int> val;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    val.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }

    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        ans += k / val[i];
        k %= val[i];

        if (k == 0) {
            cout << ans << endl;
            break;
        }
    }

    return 0;
}