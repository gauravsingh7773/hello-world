#include<stdio.h>
main()
{
    int x,y;
    for(y=0;y<10;y++)
    {
        for(x=0;x<20;x++)
            if((y>7)||(y<8&&x<11)&&x>5||(y>0&&(x+y)>5&&x<11))
            printf("*");
            else
            printf("O");
            printf("\n");
    }
}
