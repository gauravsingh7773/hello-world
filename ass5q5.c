#include<stdio.h>
int main()
{ int i,j;
        for(i=0;i<5;i++)
        { printf("\n");
                for(j=0;j<20;j++)
                {if(i%2==0 || j%5==0)
                        printf("*");
                        else
                                printf("0");
                }
        }
}

