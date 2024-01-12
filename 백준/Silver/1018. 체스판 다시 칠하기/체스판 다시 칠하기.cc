#include <stdio.h>
#include <stdlib.h>

int extractMin(int *arr, int size) {
    int min = arr[0];
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}

int main() {
    int row, col, count1, count2;
    scanf("%d %d", &row, &col);

    char board[row][col];
    for (int i = 0; i < row; i++) {
        scanf("%s", board[i]);
    }

    int iterNum = (row - 8 + 1) * (col - 8 + 1);
    int result[iterNum];

    for (int i = 0; i < row - 7; i++) {
        for (int j = 0; j < col - 7; j++) {
            count1 = 0;
            count2 = 0;
            for (int k = i; k < i + 8; k++) {
                for (int l = j; l < j + 8; l++) {
                    if ((k + l) % 2 == 0) {
                        if (board[k][l] == 'B') {
                            count1++;
                        } else {
                            count2++;
                        }
                    } else {
                        if (board[k][l] == 'B') {
                            count2++;
                        } else {
                            count1++;
                        }
                    }
                }
            }
            result[i * (col - 7) + j] = count1 < count2 ? count1 : count2;
        }
    }

    printf("%d", result[extractMin(result, iterNum)]);
    return 0;
}
