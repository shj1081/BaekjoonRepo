#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    int A[N + 1];
    vector<int> LIS(N + 1, 1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 2; i <= N; i++) {
        for (int j = 1; j < i; j++) {
            // 최대값 갱신
            if (A[j] < A[i] && LIS[i] < LIS[j] + 1) {
                LIS[i] = LIS[j] + 1;
            }
        }
    }

    cout << *max_element(LIS.begin(), LIS.end()) << endl;

    return 0;
}