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

    vector<int> arr;
    vector<int> arr2;
    int N, num, gcdNum, max;
    cin >> N;
    max = 0;
    for (size_t i = 0; i < N; i++) {
        cin >> num;
        if (max < num) {
            max = num;
        }
        arr.push_back(num);
    }

    gcdNum = abs(arr[1] - arr[0]);
    for (size_t i = 0; i < N - 1; i++) {
        gcdNum = gcd((arr[i + 1] - arr[i]), gcdNum);
        if (gcdNum == 1) {
            break;
        }
    }

    cout << (max - arr[0]) / gcdNum - N + 1;
    return 0;
}