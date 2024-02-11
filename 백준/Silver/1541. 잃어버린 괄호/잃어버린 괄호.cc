#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string equation;
    cin >> equation;

    // - 를 기준으로 나누기
    vector<string> tokens;
    string token;
    for (char c : equation) {
        if (c == '-') {
            tokens.push_back(token);
            token.clear();
        } else {
            token += c;
        }
    }
    tokens.push_back(token);

    // + 를 기준으로 더하기
    int answer = 0;

    for (int i = 0; i < tokens.size(); i++) {
        int sum = 0;
        string token = tokens[i];
        string number;
        for (char c : token) {
            if (c == '+') {
                sum += stoi(number);
                number.clear();
            } else {
                number += c;
            }
        }
        sum += stoi(number);
        if (i == 0) {
            answer += sum;
        } else {
            answer -= sum;
        }
    }

    cout << answer << endl;

    return 0;
}