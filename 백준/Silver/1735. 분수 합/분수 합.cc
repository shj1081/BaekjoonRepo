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

    int up1, up2, down1, down2;
    int up, down;

    cin >> up1 >> down1;
    cin >> up2 >> down2;

    down = lcm(down1, down2);

    up = up1 * (down / down1) + up2 * (down / down2);

    int dinom = gcd(up, down);
    up = up / dinom;
    down = down / dinom;

    cout << up << " " << down;
    return 0;
}