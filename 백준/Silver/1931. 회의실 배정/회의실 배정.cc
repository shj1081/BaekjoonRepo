#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, end, begin;

    vector<pair<int, int>> schedule;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> begin >> end;
        schedule.push_back(make_pair(end, begin));
    }

    // 끝나는 시간을 기준으로 정렬
    sort(schedule.begin(), schedule.end());

    // 가장 빨리 끝나는 회의를 선택
    int time = schedule[0].first;
    int count = 1;

    // 다음 회의의 시작 시간이 이전 회의의 끝나는 시간보다 크거나 같은 회의 중 가장 빨리 끝나는 회의를 선택
    for (int i = 1; i < N; i++) {
        if (time <= schedule[i].second) {
            count++;
            time = schedule[i].first;
        }
    }

    cout << count;

    return 0;
}