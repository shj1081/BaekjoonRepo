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

    vector<pair<int, int>> items(numOfItems + 1);  // (weight, value)
    for (int i = 1; i <= numOfItems; i++) {
        cin >> weight >> value;
        items[i] = {weight, value};
    }

    int dp[numOfItems + 1][maxWeight + 1];
    memset(dp, 0, sizeof(dp));

    for (int itemNum = 1; itemNum <= numOfItems; itemNum++) {
        for (int availWeight = 1; availWeight <= maxWeight; availWeight++) {
            // 가방에 넣을 수 있는 경우
            if (availWeight >= items[itemNum].first) {
                // 이전 아이템까지의 최대 가치와 현재 아이템을 넣었을 때의 가치 중 큰 값을 선택
                dp[itemNum][availWeight] = max(dp[itemNum - 1][availWeight], dp[itemNum - 1][availWeight - items[itemNum].first] + items[itemNum].second);
            }
            // 가방에 넣을 수 없는 경우
            else {
                dp[itemNum][availWeight] = dp[itemNum - 1][availWeight];
            }
        }
    }

    cout << dp[numOfItems][maxWeight] << endl;

    return 0;
}