#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

bool isPrime(long long n) {
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long N, num;
    vector<long long> vec;
    cin >> N;

    for (long long i = 0; i < N; i++) {
        cin >> num;
        vec.push_back(num);
    }

    for (long long i = 0; i < N; i++) {
        long long j = vec[i] < 2 ? 2 : vec[i];
        while (1) {
            if (isPrime(j)) {
                cout << j << "\n";
                break;
            }
            j++;
        }
    }

    return 0;
}