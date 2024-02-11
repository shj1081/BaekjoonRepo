#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
long long N, K, A, B, half;
long long mod = 1000000007;  // prime number -> Fermat's little theorem (a^(p-1) = 1 (mod p))

// 분할 정복을 이용한 거듭제곱
long long solve(int x) {
    if (x == 0) return 1;

    // 홀수인 경우
    if (x % 2 == 1)
        return B * solve(x - 1) % mod;
    // 짝수인 경우
    else {
        half = solve(x / 2);
        return half * half % mod;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K;
    A = 1;
    // A = N*(N-1)* .... *(N-K+1)
    for (int i = N; i >= N - K + 1; i--) A = (A * i) % mod;

    // B = K!
    B = 1;
    for (int i = 1; i <= K; i++) B = (B * i) % mod;

    // B = (K!)^(p-2)
    B = solve(mod - 2);
    cout << A * B % mod;
}