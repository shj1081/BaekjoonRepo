#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;
int gcd(int a, int b) {
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, num1, num2;
    cin >> N;

    for (size_t i = 0; i < N; i++) {
        cin >> num1 >> num2;
        cout << lcm(num1, num2) << "\n";
    }

    return 0;
}