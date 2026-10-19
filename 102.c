#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
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

