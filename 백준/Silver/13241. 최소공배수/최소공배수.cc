#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;
long long gcd(long long a, long long b) {
    long long c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long num1, num2;

    cin >> num1 >> num2;
    cout << lcm(num1, num2) << "\n";

    return 0;
}