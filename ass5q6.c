#include<stdio.h>
int main()
{ int i,j;
        for(i=0;i<5;i++)
        { printf("\n");
                for(j=0;j<20;j++)
                {if(j%5==i%2 || (j%5!=0 && i%2==1))
                        printf("0");
                        else
                                printf("*");
                }
        }
}

