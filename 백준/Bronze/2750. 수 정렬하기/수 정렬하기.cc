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

    // pivot을 기준으로 왼쪽에는 pivot보다 작은 값, 오른쪽에는 pivot보다 큰 값이 오도록 정렬
    while (i <= j) {
        // pivot보다 큰 값을 만날 때까지 i를 오른쪽으로 이동
        while (i <= right && arr[i] <= arr[pivot]) i++;
        // pivot보다 작은 값을 만날 때까지 j를 왼쪽으로 이동
        while (j > left && arr[j] >= arr[pivot]) j--;

        // i와 j가 엇갈린 경우, pivot과 j를 swap
        if (i > j)
            swap(arr, pivot, j);
        // i와 j가 엇갈리지 않은 경우, i와 j를 swap
        else
            swap(arr, i, j);
    }

    // pivot을 기준으로 왼쪽과 오른쪽을 각각 정렬
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
