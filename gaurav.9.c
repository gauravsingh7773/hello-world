#include<stdio.h>
int main()
{
int a,b,c,d,z;
printf("enter the number a");
scanf("%d",&a);
b=a/100;
c=a%100;
d=c/10;
z=c%10;
printf("the no. is %d%d%d",b,z,d);
return 0;
}
