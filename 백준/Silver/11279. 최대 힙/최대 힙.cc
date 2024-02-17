#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    priority_queue<int, vector<int> > pq;  // max heap
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int cmd;
        cin >> cmd;
        if (cmd == 0) {
            if (pq.empty()) {
                cout << 0 << endl;
            } else {
                cout << pq.top() << endl;
                pq.pop();
            }
        } else {
            pq.push(cmd);
        }
    }

    return 0;
}