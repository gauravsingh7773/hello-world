#include<stdio.h>
int main()
{
    int a,i;
    printf("enter the limit");
    scanf("%d",&i);
    for(a=1;a<=i;a++)
    {
        if(a%21==0)
            printf("%d\n",a);
    }
}
