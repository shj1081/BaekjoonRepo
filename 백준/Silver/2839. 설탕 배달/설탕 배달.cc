#include <stdio.h>

int main() {
    int N;
    int isPossible = 0;
    scanf("%d", &N);

    int cntOf3;
    int cntOf5;

    for (cntOf3 = 0; cntOf3 <= N / 3; cntOf3++) {
        for (cntOf5 = 0; cntOf5 <= N / 5; cntOf5++) {
            if (3 * cntOf3 + 5 * cntOf5 == N) {
                isPossible = 1;
                break;
            }
        }
        if (isPossible) break;
    }

    printf("%d", isPossible ? cntOf3 + cntOf5 : -1);
    return 0;
}