#include<stdio.h>
int seen[100001];

int main() {
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int nums[n];
	printf("Enter the elements of array:");
	for(int i=0;i<n;i++) scanf("%d",&nums[i]);
	
	for(int i=0;i<n;i++) {
		if(seen[nums[i]]) {
			printf("%d",nums[i]);
			break;
		}
		seen[nums[i]]=1;
	}
	return 0;
}