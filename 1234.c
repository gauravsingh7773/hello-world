#include<stdio.h>
int main()
{
    float a=2;
    float b,c;
    b=&a;
    c=b;
    printf("%f%f%f",&a,&b,&c);
    return 0;

}
