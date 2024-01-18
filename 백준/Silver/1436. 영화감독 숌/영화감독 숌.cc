#include <stdio.h>

#include <string>
using namespace std;

int main() {
    int N;
    int count = 0;
    int num = 666;
    scanf("%d", &N);

    while (count < N) {
        string numString = to_string(num);

        // find() returns npos(쓰레기값) if the substring is not found
        if (numString.find("666") != string::npos) {
            count++;
            if (count == N) {
                printf("%d", num);
                return 0;
            }
        }
        num++;
    }
    return 0;
}