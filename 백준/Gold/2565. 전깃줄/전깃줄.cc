#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int numOfLinks;
    cin >> numOfLinks;

    vector<pair<int, int>> links(numOfLinks);
    for (int i = 0; i < numOfLinks; ++i) {
        cin >> links[i].first >> links[i].second;
    }

    sort(links.begin(), links.end());

    // LIS for second element of links
    vector<int> LIS(numOfLinks, 1);
    for (int i = 1; i < numOfLinks; i++) {
        for (int j = 0; j < i; j++) {
            // update LIS
            if (links[i].second > links[j].second && LIS[i] < LIS[j] + 1) {
                LIS[i] = LIS[j] + 1;
            }
        }
    }

    cout << numOfLinks - *max_element(LIS.begin(), LIS.end()) << endl;

    return 0;
}