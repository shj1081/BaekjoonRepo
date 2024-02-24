#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

// compare function for priority_queue
struct cmp {
    bool operator()(int a, int b) {
        if (abs(a) == abs(b)) {
            return a > b;
        }
        return abs(a) > abs(b);
    }
};

// absolute max heap
priority_queue<int, vector<int>, cmp> abolusteMaxHeap;

void operation(int num) {
    if (num == 0) {
        if (abolusteMaxHeap.empty()) {
            cout << 0 << endl;
        } else {
            cout << abolusteMaxHeap.top() << endl;
            abolusteMaxHeap.pop();
        }
    } else {
        abolusteMaxHeap.push(num);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int numOfOperations, num;
    cin >> numOfOperations;

    for (int i = 0; i < numOfOperations; ++i) {
        cin >> num;
        operation(num);
    }

    return 0;
}