#include<stdio.h>
int main()
{ int a;
  printf("Enter your index of array:");
  scanf("%d",&a);
  int arr[a][a];
printf("Please enter your array:");  
  for(int i=0;i<a;i++)
   { for(int j=0;j<a;j++)
        {scanf("%d",&arr[i][j]);
		}
		printf("\n");
   }
printf("Your entered array is:\n");   
for(int x=0;x<a;x++)
   {for(int y=0;y<a;y++)
       {printf("%d",arr[x][y]);
	   }
	   printf("\n");
	   }
for(int x=0;x<a;x++)
   {for(int y=x+1;y<a;y++)
       {int c=0;
	   c=arr[x][y];
	   arr[x][y]=arr[y][x];
	   arr[y][x]=c;
	   }
	   }
printf("Your entered array's symmetric array is:\n");
for(int x=0;x<a;x++)
   {for(int y=0;y<a;y++)
       {printf("%d",arr[x][y]);
	   }
	   printf("\n");
	   }
return 0;
}