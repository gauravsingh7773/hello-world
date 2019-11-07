#include<stdio.h>
main()
{
    int x,y;
    for(y=0;y<11;y++)
    {
        for(x=0;x<17;x++)
            if(((y>0&&y<10)&&(x>5&&x<11)||(y>1&&y<9)&&(x>3&&x<13)||(y>2&&y<8)&&(x>2&&x<11)||(y>3&&y<7)&&(x>1&&x<9)))
            printf("*");
        else
            printf("O");
        printf("\n");
    }
}
