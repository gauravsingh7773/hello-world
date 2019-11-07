#include<stdio.h>
int main()
{ int i,j;
        for(i=0;i<9;i++)
        { printf("\n");
                for(j=0;j<20;j++)
                {if(i>2 && (i+j>7 && j<i+4))
                        printf("0");
                        else
                                printf("*");
                }
        }
}
