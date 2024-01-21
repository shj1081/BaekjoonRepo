#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    // cin, cout 속도 향상
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int num;
    cin >> n;

    vector<int> arr(10001);
    fill(arr.begin(), arr.end(), 0);

    for (int i = 0; i < n; ++i) {
        cin >> num;
        arr[num]++;
    }

    for (int i = 1; i <= 10000; ++i) {
        for (int j = 0; j < arr[i]; ++j) {
            cout << i << '\n';
        }
    }

    return 0;
}
