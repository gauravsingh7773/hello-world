#include<stdio.h>
int main()
{
    int a;
    for(a=20;a<=80;a++)
    {
        if(a<=40&&a%2==0)
            printf("even numbers %d\n",a);
            if(a>=50&&a%2!=0)
            printf("odd numbers are %d\n",a);
    }
}
