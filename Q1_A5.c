#include<stdio.h>
main()
{
    int x,y;
    for(y=0;y<5;y++)
    {
        for(x=0;x<20;x++)
            if(y%2==0||(x+y)%2!=0)
            printf("*");
        else
            printf("O");
        printf("\n");
    }

}
