#include<stdio.h>
int main()
{ int a;
printf("Enter the Time(in second):");
scanf("%d",&a);
int M=0;
int S=0;
M=a/60;
S=a%60;
int H =0;
H=M/60;
M=M%60;
printf("The time is:%d %d %d",H,M,S);
return 0;
}
