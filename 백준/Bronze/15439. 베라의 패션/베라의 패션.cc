#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    cout << N * (N - 1);

    return 0;
}