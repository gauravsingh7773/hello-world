#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the value of a");
scanf("%d",&a);
b=a%100;
c=b%10;
d=a/100;
printf("the number is %d%d",d,c);
return 0;
}
