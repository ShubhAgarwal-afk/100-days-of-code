#include<stdio.h>
#include<string.h>
int main()
{char str[100];
 printf("Enter your string:");
 fgets(str,sizeof(str),stdin);
  int i=0;
  int s=0;
  while(i<n)
  {  if(str[i]==' ')
	   {  s++;
       i++;}
  }
  int j=0;
  while(j<n)
  {  while(j<n && str[j]==' ')
	  {j++;
      }
	  printf("%c",str[j]);
	  printf(".");
	  while(s>1 && str[j]!=0)
	  {j++
      }
  }
  for(;j<n;j++)
  {putchar(str[j]);
  }
  return 0;
}
	   