#include<stdio.h>
int main()
{  int a;
printf("Enter the size of your array:");
scanf("%d",&a);
int arr[a];
printf("Enter the element of you array:\n");
for(int i=0;i<a;i++)
   { scanf("%d",&arr[i]);
   }
   printf("Your array is:\n");
for(int i=0;i<a;i++)
   { printf("%d",arr[i]);
   }
   printf("\n");
int d;
printf("Enter the number index you want to delete:");
scanf("%d",&d);
for(int i=d,c=0;i<=a-1;i++)
   {if(i!=a-1)
	   {arr[d]=arr[d+1];  
	   }
	   else
	   {arr[a-1]=0;
            printf("Your new array is:\n");
for(int t=0;t<a-1;t++)
   { printf("%d",arr[t]);
   }
  
   }
   }
    return 0;
}
   