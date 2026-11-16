#include<stdio.h>

int main()
{  int n;
   printf("Enter the size of array:");
   scanf("%d",&n);
   int nums[n];
   printf("Enter the elements of array:");
   for(int i=0;i<n ;i++) scanf("%d",&nums[i]);
   
   int candidate =0, count =0;
   for(int i=0;i<n;i++)  {
	   if(count ==0) candidate =nums[i];
	   if(nums[i] == candidate) count++;
	   else count--;
   }
   
   int freq =0;
   for(int i =0;i<n;i++)
	   if(nums[i] == candidate) freq++;
   
   if(freq >n/2) printf("%d",candidate);
   else printf("-1");
   return 0;
}