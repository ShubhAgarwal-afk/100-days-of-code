#include<stdio.h>
int binarySearch(int arr[], int n, int target);
int main()
   {int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
	 printf("Enter your elements(in sorted manner):\n");
for(int i=0;i<n;i++)
   {scanf("%d",&arr[i]);
   }
   printf("Enter the element you wish to search:");
   int target;
   scanf("%d",&target);
   printf("Your desired element is at index:%d",binarySearch(arr,n,target));
return 0;
   }


int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
