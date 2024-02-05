#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

// global variables
int N;
int MAX = -1000000000;  // -10^9
int MIN = 1000000000;   // 10^9
vector<int> numVec;
vector<int> operVec(4);  // +, -, *, /

void calc(int depth, int result) {
    if (depth == N) {
        MAX = max(MAX, result);
        MIN = min(MIN, result);
        return;
    }

    for (int i = 0; i < 4; i++) {
        if (operVec[i] > 0) {
            operVec[i]--;
            switch (i) {
                case 0:
                    calc(depth + 1, result + numVec[depth]);
                    break;
                case 1:
                    calc(depth + 1, result - numVec[depth]);
                    break;
                case 2:
                    calc(depth + 1, result * numVec[depth]);
                    break;
                case 3:
                    calc(depth + 1, result / numVec[depth]);
                    break;
            }
            operVec[i]++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    numVec.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> numVec[i];
    }
    for (int i = 0; i < 4; i++) {
        cin >> operVec[i];
    }

    calc(1, numVec[0]);
    cout << MAX << endl;
    cout << MIN << endl;

    return 0;
}