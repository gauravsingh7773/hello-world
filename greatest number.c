#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("greatest number is %d",a);
if(b>c && b>a)
printf("greatest number is %d",b);
if(c>a && c>b)
printf("greatest number is %d",c);
}
