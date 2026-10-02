#include<stdio.h>
int main()
/*
{int a;
printf("Please enter the size of string:");
char arr[a+1];
*/
{int a;
printf("Enter the length of string you want to print:");
scanf("%d",&a);
getchar();
char str[a+1];
printf("Enter a string:");
fgets(str,sizeof(str),stdin);
for(int i =0;i<a;i++)
   {for(int j=i;j<a;j++)
	   {putchar(str[j]);
      
	  }
	 if(i!=a-1)
	 { printf(",");
     }
   }
return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     