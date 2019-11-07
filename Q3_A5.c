#include<stdio.h>
main()
{
    int x,y;
    for(y=0;y<10;y++)
    {
        for(x=0;x<20;x++)
            if((x<8&&y<3)||(x>14&&y>6))
            printf("O");
        else
            printf("*");
        printf("\n");
    }

}
