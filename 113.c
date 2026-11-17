#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int x = *(int *)a, y = *(int *)b;
    return (x > y) - (x < y);        // safe comparison, no overflow
}

int main() {
    int n, k;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter k:");
    scanf("%d", &k);

    qsort(arr, n, sizeof(int), cmp);
    printf("%d", arr[k - 1]);
    return 0;
}