#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, num;
    vector<int> vec;
    cin >> N;

    for (size_t i = 0; i < N; i++) {
        cin >> num;
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());
    cout << vec.front() * vec.back();

    return 0;
}