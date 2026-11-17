#include<stdio.h>

int main() {
	int n,k;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array:");
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	printf("Enter K:");
	scanf("%d",&k);
	
	int windowSum= 0;
	for(int i=0;i<k;i++) windowSum +=arr[i];
	
	int maxSum = windowSum;
	for(int i=k;i<n;i++) {
		windowSum += arr[i] -arr[i-k]; 
    if (windowSum > maxSum) maxSum =windowSum;
	}
	
	printf("%d",maxSum);
	return 0;
}