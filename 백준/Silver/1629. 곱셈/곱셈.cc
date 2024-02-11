#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

long long int div_conq(long long int num1, long long int num2, long long int mod) {
    if (num2 == 1) {
        return num1 % mod;
    }
    // num2를 줄여나가기 위해 num2 / 2로 재귀호출
    // a^(b) % c = (a^(b/2) % c * a^(b/2) % c) % c
    long long int result = div_conq(num1, num2 / 2, mod) % mod;
    // 짝수일 경우 a^(b) % c = (a^(b/2) % c * a^(b/2) % c) % c
    if (num2 % 2 == 0) {
        return (result * result) % mod;
    }
    // 홀수일 경우 a^(b) % c = (a^(b/2) % c * a^(b/2) % c * a) % c
    else {
        return ((result * result) % mod * num1) % mod;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int num1, num2, mod;
    cin >> num1 >> num2 >> mod;
    cout << div_conq(num1, num2, mod) << endl;

    return 0;
}