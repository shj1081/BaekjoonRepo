#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

// 다른 compare 함수를 만들어서 정렬
bool cmp(string a, string b) {
    if (a.length() == b.length()) {
        return a < b;
    } else {
        return a.length() < b.length();
    }
}

int main() {
    // cin, cout 속도 향상
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<string> strSet;
    int N;
    cin >> N;

    // 중복 제거를 위해 set 사용
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        strSet.insert(str);
    }

    // set을 vector로 변환 후 정렬
    vector<string> strVec(strSet.begin(), strSet.end());
    sort(strVec.begin(), strVec.end(), cmp);

    for (int i = 0; i < strVec.size(); i++) {
        cout << strVec[i] << '\n';
    }

    return 0;
}
