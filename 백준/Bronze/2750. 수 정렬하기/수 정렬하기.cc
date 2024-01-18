#include <stdio.h>

void quickSort(int *arr, int left, int right) {
    if (left >= right) return;

    int pivot = arr[left];
    int i = left + 1;
    int j = right;

    while (i <= j) {
        while (i <= j && arr[i] <= pivot) i++;
        while (i <= j && arr[j] > pivot) j--;

        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[left];
    arr[left] = arr[j];
    arr[j] = temp;

    quickSort(arr, left, j - 1);
    quickSort(arr, j + 1, right);
}

int main() {
    int num;
    scanf("%d", &num);

    int arr[num];
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, num - 1);

    for (int i = 0; i < num; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}