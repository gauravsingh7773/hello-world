#include<stdio.h>
int main()
{
int a,b,c,t,z;
printf("enter the value of a");
scanf("%d",&a);
b=a%100;
c=b/10;
t=b%10;
z=t+c;
printf("%d",z);
return 0;
}
