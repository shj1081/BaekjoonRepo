#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int numOfCities;
    cin >> numOfCities;

    vector<long long int> roads(numOfCities);
    vector<long long int> prices(numOfCities);

    for (int i = 0; i < numOfCities - 1; i++) {
        cin >> roads[i];
    }

    for (int i = 0; i < numOfCities; i++) {
        cin >> prices[i];
    }

    long long int currentPrice = prices[0];
    long long int totalCost = currentPrice * roads[0];  // 첫번째 도시에서는 무조건 주유해야함
    for (int i = 1; i < numOfCities - 1; i++) {
        // 현재 도시의 가격이 더 비싸면 갱신
        if (currentPrice > prices[i]) {
            currentPrice = prices[i];
        }
        // 현재 도시의 가격으로 더 주유한다고 가정
        totalCost += currentPrice * roads[i];
    }

    cout << totalCost << endl;
    return 0;
}