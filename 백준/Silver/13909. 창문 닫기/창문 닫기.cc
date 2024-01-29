#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long N;
    cin >> N;

    if (N == 1) {
        cout << 1;
    } else {
        cout << (long long)sqrt(N);
    }

    return 0;
}