#include<stdio.h>
int main()
{
    int a,i;
    printf("enter the limit");
    scanf("%d",&i);
    for(a=1;a<=i;a++)
    {
        if((a%3==0||a%5==0)&&!(a%15==0))
            printf("%d\n",a);
    }
}
