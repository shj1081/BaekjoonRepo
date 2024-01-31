#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    vector<int> vec(N);

    for (size_t i = 0; i < N; i++) {
        cin >> vec[i];
    }

    cout << *min_element(vec.begin(), vec.end()) << " " << *max_element(vec.begin(), vec.end());

    return 0;
}