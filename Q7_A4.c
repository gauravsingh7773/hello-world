#include<stdio.h>
int main()
{
    int a,i;
    printf("enter the limit");
    scanf("%d",&i);
    for(a=1;a<=i;a++)
    {
        if((!(a%3==0||a%5==0))&&a%2==0)
            printf("the numbers are%d\n",a);

    }

}
