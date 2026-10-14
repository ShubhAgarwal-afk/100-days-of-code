#include<stdio.h>
#include<string.h>
int main()
{ printf("Enter your String:");
  char str[100];
  fgets(str,sizeof(str),stdin);
  int length =strlen(str);
  char t;
  for(int j=0;j<length;j++)
     {	 
	  if(str[j] == 'A' || (str[j])== 'E' || (str[j])== 'I'|| (str[j])== 'O' || (str[j])== 'U' || (str[j])== 'a' || (str[j])== 'e' || (str[j])== 'i' || (str[j])=='o' || (str[j])=='u')
	    { for(int i=0;i<length;i++)
             {str[i]=str[i+1];
			 }
	    }
     }
	 
	 
	 printf("Your string with removed vowels:%s",str);
	  return 0;
	  }