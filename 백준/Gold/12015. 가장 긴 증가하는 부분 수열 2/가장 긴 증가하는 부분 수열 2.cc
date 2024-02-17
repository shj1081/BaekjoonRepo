#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int LIS(vector<int>& arr) {
    int n = arr.size();
    vector<int> lis;
    for (int i = 0; i < n; i++) {
        auto it = lower_bound(lis.begin(), lis.end(), arr[i]);  // 이 부분에서 binary search를 사용
        if (it == lis.end()) {
            lis.push_back(arr[i]);
        } else {
            *it = arr[i];
        }
    }
    return lis.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << LIS(arr) << endl;

    return 0;
}