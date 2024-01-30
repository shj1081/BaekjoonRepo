#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int calc(int N, int k) {
    int upper = 1;
    int lower = 1;
    for (size_t i = 0; i < k; i++) {
        upper *= N;
        N--;
    }

    if (k != 0) {
        for (size_t i = 1; i <= k; i++) {
            lower *= i;
        }
    }
    return upper / lower;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, k;
    cin >> N >> k;

    cout << calc(N, k);
}