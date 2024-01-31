#include <string.h>

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int recursion(const char *s, int l, int r, int *cnt) {
    (*cnt)++;
    if (l >= r)
        return 1;
    else if (s[l] != s[r])
        return 0;
    else {
        return recursion(s, l + 1, r - 1, cnt);
    }
}

int isPalindrome(const char *s, int *cnt) {
    return recursion(s, 0, strlen(s) - 1, cnt);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    int cnt;
    string str;

    cin >> N;
    for (size_t i = 0; i < N; i++) {
        cnt = 0;
        cin >> str;
        cout << isPalindrome(str.c_str(), &cnt) << " " << cnt << "\n";
    }

    return 0;
}
