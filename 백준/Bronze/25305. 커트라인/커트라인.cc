#include <stdio.h>

void swap(int *arr, int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void quickSort(int *arr, int left, int right) {
    if (left >= right) return;

    int pivot = left;
    int i = left + 1;
    int j = right;

    while (i <= j) {
        while (i <= right && arr[i] >= arr[pivot]) i++;
        while (j > left && arr[j] <= arr[pivot]) j--;

        if (i > j)
            swap(arr, pivot, j);
        else
            swap(arr, i, j);
    }

    quickSort(arr, left, j - 1);
    quickSort(arr, j + 1, right);
}

int main() {
    int N;
    int k;
    scanf("%d %d", &N, &k);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, N - 1);

    printf("%d\n", arr[k - 1]);
}