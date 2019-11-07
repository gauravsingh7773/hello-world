#include<stdio.h>
int main()
{
    int a,i;
    printf("enter the limit");
    scanf("%d",&i);
    for(a=0;a<=i;a++)
        {
            if(((a%10)+(a/10))%7==0)
                printf("%d\n",a);
        }




}
