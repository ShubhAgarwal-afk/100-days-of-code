#include<stdio.h>
int main()
{int a;
printf("Enter you array size you want create;");
scanf("%d",&a);
int b;
printf("Enter you array size you want create;");
scanf("%d",&b);
int arr1[a];
int arr2[b];
int arr3[a+b];
printf("Enter the elements of first array:");
for(int j=0;j<a;j++)
    { scanf("%d",&arr1[j]);
	}
printf("Enter the elements of second array:");
for(int i=0;i<b;i++)
    { scanf("%d",&arr2[i]);
	}
printf("Your merged array is:");
for(int q=0;q<a;q++)
    { arr3[q]=arr1[q];
	}
	int w=0;
for(int q=a;w<b;w++)
    { arr3[q]=arr2[w];
       ++q;	
	}
for(int y=0;y<a+b;y++)
   {printf("%d",arr3[y]);
   }
   return 0;
   }