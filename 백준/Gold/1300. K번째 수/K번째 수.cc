#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
typedef long long int LL;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    LL n, k;
    cin >> n >> k;

    LL left = 1, right = n * n, mid = 0, cnt = 0;
    LL answer = 0;

    while (left <= right) {
        mid = (left + right) / 2;
        cnt = 0;
        for (LL i = 1; i <= n; i++) {
            cnt += min(n, mid / i);
        }
        if (cnt < k)
            left = mid + 1;
        else {
            // Store the answer when cnt becomes equal to k
            answer = mid;
            right = mid - 1;
        }
    }

    cout << answer << endl;

    return 0;
}