#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int ans = v[0];

    for (int i = 1; i < n; i++) {
        v[i] += v[i - 1];
        ans += v[i];
    }

    cout << ans << endl;

    return 0;
}