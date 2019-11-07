#include<stdio.h>
main()
{
    int x,y;
    for(y=0;y<9;y++)
    {
        for(x=0;x<20;x++)
            if((y<3)||(y>2&&y<8)&&((x+y)<8)||(y>2&&x>6)||(y>3&&y<5&&x>7))
            printf("*");
        else
            printf("O");
        printf("\n");
    }
}
