#include<stdio.h>

int main(){
	int n,k;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array:");
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	printf("Enter the value of K:");
	scanf("%d",&k);
	
	int dq[n];
	int front=0,back=-1;
	
	for(int i=0;i<n;i++) {
		if(front <= back && dq[front] <= i-k) front++;
		while(front<=back && arr[dq[back]] <= arr[i]) back--;
		dq[++back] =i;
		if(i>=k-1) {
			if(i>k-1) printf(" ");
			printf("%d",arr[dq[front]]);
		}
		
	}
return 0;
}