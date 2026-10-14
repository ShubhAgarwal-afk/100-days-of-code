#include<stdio.h>
#include<string.h>
int main()
{ char s1[1000],s2[1000],s3[2000];
   
   printf("Enter your string 1:");
   fgets(s1,sizeof(s1),stdin);
   s1[strcspn(s1,"\n")] ='\0';
   
   printf("Enter your string 2:");
   fgets(s2,sizeof(s2),stdin);
   s2[strcspn(s2,"\n")] = '\0';  

  if(strlen(s1)==strlen(s2))
   { strcpy(s3,s1);
     strcat(s3,s1);
	 if(strstr(s3,s2) != NULL)
	 {printf("Rotation");
     }
	 else 
	 {printf("Not rotation");
	 }
   }
   else
   {
        printf("Not rotation");
   }
   return 0;
}
   