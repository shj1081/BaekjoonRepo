#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // set의 set_symetric_differnce 함수 이용

    vector<int> arr1;
    vector<int> arr2;

    int N, M;
    int input;

    cin >> N >> M;

    for (size_t i = 0; i < N; i++) {
        cin >> input;
        arr1.push_back(input);
    }

    for (size_t i = 0; i < M; i++) {
        cin >> input;
        arr2.push_back(input);
    }

    // 아래의 방법은 정렬이 되어있을때에만 사용가능
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    vector<int> result(arr1.size() + arr2.size());
    auto itr = set_symmetric_difference(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), result.begin());  // 대칭차집합
    result.erase(itr, result.end());                                                                          // 원소 없는 공간 지워주기

    cout << result.size();

    return 0;
}