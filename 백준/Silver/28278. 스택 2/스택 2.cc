#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, command, num;
    vector<int> stack;
    cin >> N;

    for (size_t i = 0; i < N; i++) {
        cin >> command;
        switch (command) {
            case 1:
                cin >> num;
                stack.push_back(num);
                break;
            case 2:
                if (stack.size() == 0) {
                    cout << -1 << "\n";
                } else {
                    cout << stack.back() << "\n";
                    stack.pop_back();
                }
                break;
            case 3:
                cout << stack.size() << "\n";
                break;
            case 4:
                if (stack.size() == 0) {
                    cout << 1 << "\n";
                } else {
                    cout << 0 << "\n";
                }
                break;
            case 5:
                if (stack.size() == 0) {
                    cout << -1 << "\n";
                } else {
                    cout << stack.back() << "\n";
                }
                break;
        }
    }

    return 0;
}