#include <stdio.h>

int main() {
    int n, x;
	printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
	printf("Enter the elements of array:");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
   printf("Enter the input:");
   scanf("%d", &x);

    int lo = 0, hi = n - 1, ans = -1;
    while (lo <= hi) {
        int mid =  (hi + lo) / 2;
        if (arr[mid] >= x) {
            ans = mid;         
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    printf("%d\n", ans);
    return 0;
}

