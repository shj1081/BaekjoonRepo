#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int numOfItems, maxWeight;
    int weight, value;
    cin >> numOfItems >> maxWeight;

    int weights[numOfItems + 1];
    int values[numOfItems + 1];

    for (int i = 1; i <= numOfItems; i++) {
        cin >> weight >> value;
        weights[i] = weight;
        values[i] = value;
    }

    int dp[maxWeight + 1];
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= numOfItems; i++) {
        // 가방에 넣을 수 있는 무게가 weights[i]보다 작으면 넣을 수 없으므로 continue
        for (int j = maxWeight; j >= weights[i]; j--) {
            // 무게가 j인 가방에 넣을 수 있는 최대 가치 업데이트
            dp[j] = max(dp[j], dp[j - weights[i]] + values[i]);
        }
    }

    cout << dp[maxWeight] << endl;

    return 0;
}