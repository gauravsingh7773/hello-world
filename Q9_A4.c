#include<stdio.h>
int main()
{
    int a;
    for(a=0;a<=100;a++)
    {
        if((a%10)%3==0)
            printf("the numbers are%d\n",a);
    }
}
