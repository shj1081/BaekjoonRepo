#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int K, num, sum;
    vector<int> stack;
    cin >> K;

    for (size_t i = 0; i < K; i++) {
        cin >> num;
        if (num == 0) {
            stack.pop_back();
        } else {
            stack.push_back(num);
        }
    }

    sum = accumulate(stack.begin(), stack.end(), 0);
    cout << sum;

    return 0;
}