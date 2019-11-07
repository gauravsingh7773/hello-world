#include<stdio.h>
main()
{
    int x,y;
    for(y=0;y<4;y++)
    {
        for(x=0;x<10;x++)
            if((x<10&&y<5&&(x+y)%2==0))
            printf("O");
        else
            printf("*");
        printf("\n");
    }

}
