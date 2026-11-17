#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int cur = arr[0], best = arr[0];
    for (int i = 1; i < n; i++) {
        cur = (cur + arr[i] > arr[i]) ? cur + arr[i] : arr[i];  // extend or restart
        if (cur > best) best = cur;
    }
    printf("%d", best);
    return 0;
}