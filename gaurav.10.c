#include<stdio.h>
#include<math.h>
int main()
{
int a=3,b=4,c=5,m,s,p;
s=(a+b+c)/2;
p=s*(s-a)*(s-b)*(s-c);
m=sqrt(p);
printf("%d",m);
return 0;
}
