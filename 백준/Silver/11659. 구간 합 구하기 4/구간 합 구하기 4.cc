#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M, sum, left, right;
    cin >> N >> M;

    int arr[N + 1];
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    for (int i = 0; i < M; i++) {
        cin >> left >> right;
        cout << arr[right] - arr[left - 1] << endl;
    }

        return 0;
}