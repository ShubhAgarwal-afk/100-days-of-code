#include<stdio.h>
int main()
{ int a;
printf("Enter the Size of square matrix:");
scanf("%d",&a);
int arr[a][a];
printf("Enter your elements of array:\n");
for(int i=0;i<a;i++)
   { for(int j=0;j<a;j++)
        {scanf("%d",&arr[i][j]);
		}
		printf("\n");
   }
   int sum=0;
for(int i=0;i<a;i++)
   {sum=sum+arr[i][i];
   }
   printf("The Sum of main diagonal elements:%d",sum);
   return 0;
   }