#include<stdio.h>
int main()
{int a;
int b;
printf("Enter your row number:");
scanf("%d",&a);
printf("Enter your column number:");
scanf("%d",&b);
int arr[a][b];
printf("Enter the elements of your array:\n");
for(int i=0;i<a;i++)
   { for(int j=0;j<b;j++)
        {scanf("%d",&arr[i][j]);
		}
		printf("\n");
   }
for(int x=0;x<a;x++)
   {for(int y=0;y<b;y++)
       {printf("%d",arr[x][y]);
	   }
	   printf("\n");
	   }
int arr_[a];
for(int w=0,sum=0;w<a;w++)
   {for(int v=0;v<b;v++)
	   {sum=sum+arr[w][v];
       }
	   printf("Your column is %d and sum is:%d",w+1,sum);
	   arr_[w];
	   
   }
   printf("\n");
   for(int i=0;i<a;i++)
   { printf("Your sum array is:%d",arr_[i]);
   }
   
 return 0;
}