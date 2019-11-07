#include<stdio.h>
int main()
{
    int i=1,a,fact=1;
    printf("enter any number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;

    }printf("factorial of %d=%d",a,fact);
    return 0;
}
