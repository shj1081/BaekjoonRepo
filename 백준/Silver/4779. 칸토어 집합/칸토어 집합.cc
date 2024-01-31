#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

void func(int n) {
    if (n == 1) {
        cout << '-';
        return;
    }

    func(n / 3);

    for (size_t i = 0; i < n / 3; i++) {
        cout << " ";
    }

    func(n / 3);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;

    // eof 인 경우 cin 이 false 뱉음
    while (cin >> N) {
        func(pow(3, N));
        cout << "\n";
    }

    return 0;
}