#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
int alphabetCount[26][200001] = {0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    int numOfQuestions;
    cin >> str;
    cin >> numOfQuestions;

    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < 26; j++) {
            // 이전까지의 누적합을 저장
            if (i > 0) {
                alphabetCount[j][i] = alphabetCount[j][i - 1];
            }
        }
        // 해당 알파벳의 위치에 1을 더함 (str[i] - 'a'는 알파벳 index를 나타냄)
        alphabetCount[str[i] - 'a'][i]++;
    }

    for (int i = 0; i < numOfQuestions; i++) {
        char alphabet;
        int start, end;
        cin >> alphabet >> start >> end;

        int count = 0;
        if (start == 0) {
            count = alphabetCount[alphabet - 'a'][end];
        } else {
            count = alphabetCount[alphabet - 'a'][end] - alphabetCount[alphabet - 'a'][start - 1];
        }
        cout << count << endl;
    }

    return 0;
}