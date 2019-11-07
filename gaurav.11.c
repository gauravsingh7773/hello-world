#include<stdio.h>
#include<math.h>
int main()
{
int a=3,b=7,c=11,d=13,p,s;
printf("distance between two points is");
p=(b-d)*(b-d)+(a-c)*(a-c);
s=sqrt(p);
printf("%d",s);
return 0;
}
