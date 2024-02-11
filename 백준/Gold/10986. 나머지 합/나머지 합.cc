#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M, num;
    cin >> N >> M;

    int arr[N + 1];
    long long int mod[M];
    memset(arr, 0, sizeof(arr));
    memset(mod, 0, sizeof(mod));

    // 누적합 % M을 이용해 나머지 계산
    for (int i = 1; i <= N; i++) {
        cin >> num;
        arr[i] = (arr[i - 1] + num) % M;
        mod[arr[i]]++;
    }

    long long int ans = mod[0];
    for (int i = 0; i < M; i++) {
        ans += (mod[i] * (mod[i] - 1)) / 2;
    }

    cout << ans << endl;
    return 0;
}