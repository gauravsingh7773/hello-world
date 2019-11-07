#include<stdio.h>
int main()
{
    int a;
    for(a=1;a<=100;a++)
    {
        if(a<20||a>90)
            printf("the numbers are%d\n",a);
            if(a>50&&a<70)
                printf("the numbers are %d\n",a);
    }
}
