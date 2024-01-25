#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int arr[20000001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    int num;

    for (int i = 0; i < N; i++) {
        cin >> num;
        arr[num + 10000000] = 1;
    }

    int M;
    cin >> M;

    vector<int> arr2;
    for (int i = 0; i < M; i++) {
        cin >> num;
        arr2.push_back(num);
    }

    for (int i = 0; i < M; i++) {
        cout << arr[arr2[i] + 10000000] << " ";
    }

    return 0;
}