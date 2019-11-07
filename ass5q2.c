#include<stdio.h>
int main()
{ int i,j;
        for(i=0;i<10;i++)
        { printf("\n");
                for(j=0;j<20;j++)
                {if((i<3 && j<8) || (i>6 && j>14))
                        printf("0");
                        else
                                printf("*");
                }
        }
}

