#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, C;
    cin >> N >> C;

    vector<int> house(N);
    for (int i = 0; i < N; i++) {
        cin >> house[i];
    }

    sort(house.begin(), house.end());
    int low = 1;
    int high = house[N - 1] - house[0];
    int answer = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        int cnt = 1;
        int prev = house[0];
        for (int i = 1; i < N; i++) {
            if (house[i] - prev >= mid) {
                cnt++;
                prev = house[i];
            }
        }
        if (cnt >= C) {
            answer = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << answer << endl;

    return 0;
}