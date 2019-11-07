#include<stdio.h>
int main()
{
    int a;
    for(a=0;a<=100;a++)
    {
        if(a=(a%5==0)||(a%8==0))
            printf("%d\n",a);
    }
}
