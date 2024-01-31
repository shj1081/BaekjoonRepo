#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <vector>

using namespace std;

static bool comp(pair<int, int>& a, pair<int, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, num;
    cin >> N;
    vector<int> vec;
    map<int, int> map;

    for (size_t i = 0; i < N; i++) {
        cin >> num;
        vec.push_back(num);
        map[num]++;
    }

    sort(vec.begin(), vec.end());

    // 산술 평균
    int mean = round(double(accumulate(vec.begin(), vec.end(), 0)) / N);
    cout << mean << "\n";

    // 중앙값
    cout << vec[N / 2] << "\n";

    // 최빈값
    vector<pair<int, int>> freq(map.begin(), map.end());                               // map을 vector로 이동
    sort(freq.begin(), freq.end(), comp);                                              // 조건에 따라 정렬
    int freqNum = (freq[0].second == freq[1].second) ? freq[1].first : freq[0].first;  // 조건에 따라 값 도출
    cout << freqNum << "\n";

    // 범위
    cout << abs(vec[N - 1] - vec[0]);

    return 0;
}
