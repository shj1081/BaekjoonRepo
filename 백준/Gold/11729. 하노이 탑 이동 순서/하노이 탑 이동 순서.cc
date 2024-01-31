#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

void hanoi(int N, int from, int to, int via) {
    if (N == 1) {
        cout << from << " " << to << "\n";
        return;
    }
    hanoi(N - 1, from, via, to);        // N-1개를 경유지로 옮김
    cout << from << " " << to << "\n";  // N번째를 목적지로 옮김
    hanoi(N - 1, via, to, from);        // 경유지에 있는 N-1개를 목적지로 옮김
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    cout << int(pow(2, N)) - 1 << "\n";
    hanoi(N, 1, 3, 2);

    return 0;
}