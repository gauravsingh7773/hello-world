#include<stdio.h>
int main()
{
    int a,i=1,fact=1;


    printf("enter any number");
    scanf("%d",&a);
    while(i<=a)
    {
      fact=fact*i;
      i++;
    }printf("factorial of %d=%d",a,fact);
    return 0;
}
