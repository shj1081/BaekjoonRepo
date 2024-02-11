#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, K;
    cin >> N >> K;

    int temperature[N + 1];
    for (int i = 1; i <= N; i++) {
        cin >> temperature[i];
    }

    int sum = 0;
    int max_sum = 0;
    for (int i = 1; i <= K; i++) {
        sum += temperature[i];
    }

    max_sum = sum;
    for (int i = K + 1; i <= N; i++) {
        sum += temperature[i] - temperature[i - K];
        max_sum = max(max_sum, sum);
    }

    cout << max_sum << endl;

    return 0;
}