#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int max = -1000001, min = 1000001, num, N;
    cin >> N;

    for (size_t i = 0; i < N; i++) {
        cin >> num;
        if (max < num) {
            max = num;
        }
        if (min > num) {
            min = num;
        }
    }

    cout << min << " " << max;

    return 0;
}