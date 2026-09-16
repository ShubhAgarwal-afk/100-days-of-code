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
printf("transpose of matrix of enetered:\n");
for(int y=0;y<b;y++)
   {for(int x=0;x<a;x++)
       {printf("%d",arr[x][y]);
	   }
	   printf("\n");
	   }
return 0;
}
	  