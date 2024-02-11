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
    vector<int> LDS(N + 1, 1);

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 2; i <= N; i++) {
        // LIS
        for (int j = 1; j < i; j++) {
            // 최대값 갱신
            if (A[j] < A[i] && LIS[i] < LIS[j] + 1) {
                LIS[i] = LIS[j] + 1;
            }
        }
    }

    for (int i = N - 1; i >= 1; i--) {
        // LDS
        for (int j = N; j > i; j--) {
            // 최대값 갱신
            if (A[j] < A[i] && LDS[i] < LDS[j] + 1) {
                LDS[i] = LDS[j] + 1;
            }
        }
    }

    int bitonicMax = 0;
    for (int i = 1; i <= N; i++) {
        if (bitonicMax < LIS[i] + LDS[i] - 1) {
            bitonicMax = LIS[i] + LDS[i] - 1;
        }
    }

    cout << bitonicMax << endl;

    return 0;
}