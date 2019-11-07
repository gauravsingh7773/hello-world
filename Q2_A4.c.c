#include<stdio.h>
#include<math.h>
void main()
{
    int i;
    for(i=20;i<=80;i++)
    {
        if(i<=40)
        printf("%d\n",i);

        if(i>=50&&i%2==0)
            printf(" even no%d\n",i);
    }
}

