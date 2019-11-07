#include<stdio.h>
#include<math.h>
int main()
{
float a=6,b=7,c=3,d=4,e=2,m,t;
printf("the distance between point and line is");
m=sqrt(c*c+d*d);
t=(a*c+b*d+e)/m;
printf("%f\n",t);
return 0;
}
