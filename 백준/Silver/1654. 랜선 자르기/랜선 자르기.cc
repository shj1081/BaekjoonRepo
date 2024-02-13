#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long start = 1;
    long long end = *max_element(a.begin(), a.end());
    long long maxLength = 0;

    while (start <= end) {
        long long mid = (start + end) / 2;
        long long cnt = 0;

        // mid 길이로 나누었을 때 나오는 개수를 구한다.
        for (int i = 0; i < n; i++) {
            cnt += a[i] / mid;
        }

        // 나오는 개수가 k보다 크거나 같으면 mid 길이를 늘려본다. (mid+1 ~ end 사이)
        if (cnt >= k) {
            maxLength = max(maxLength, mid);
            start = mid + 1;
        }
        // 나오는 개수가 k보다 작으면 mid 길이를 줄여본다. (start ~ mid-1 사이)
        else {
            end = mid - 1;
        }
    }

    cout << maxLength << endl;

    return 0;
}