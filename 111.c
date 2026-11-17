#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter k:");
    scanf("%d", &k);

    int q[n];                   
    int front = 0, back = -1;   
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) q[++back] = i;

        if (i >= k - 1) {
            
            while (front <= back && q[front] < i - k + 1) front++;

            if (i > k - 1) printf(" ");
            if (front <= back) printf("%d", arr[q[front]]);
            else printf("0");
        }
    }
    return 0;
}