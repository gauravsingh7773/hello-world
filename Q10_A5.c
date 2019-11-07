#include<stdio.h>
main()
{
    int x,y;
    for(y=0;y<10;y++)
    {
        for(x=0;x<20;x++)
            if(y>7||y<8&&(x+y)>7&&(y>1))
            printf("O");
        else
            printf("*");
            printf("\n");

    }
}
