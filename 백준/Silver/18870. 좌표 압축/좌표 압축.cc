#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1000001;
int arr[MAX];  // 저장할 element의 수가 가변적이지 않으므로 array 사용

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> compressed;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        compressed.push_back(arr[i]);  // 압축을 위한 copy
    }

    // unique 함수는 맨 뒤로 보낸 중복 원소들의 시작 위치를 반환한다. (정렬 후 실행하였기에 가장 큰 원소의 다음을 가리키게 됨)
    // erase 함수는 그 위치부터 마지막 원소까지 삭제한다.
    // 결과적으로, 중복 원소들이 삭제된다.
    sort(compressed.begin(), compressed.end());
    compressed.erase(unique(compressed.begin(), compressed.end()), compressed.end());

    // lower_bound 함수 : 찾으려는 key 값보다 같거나 큰 숫자가 배열 몇 번째에서 처음 등장하는지 찾기 위함 (배열의 시작 주소 뺴주기)
    for (int i = 0; i < N; i++) {
        int index = lower_bound(compressed.begin(), compressed.end(), arr[i]) - compressed.begin();
        cout << index << " ";
    }

    return 0;
}