#include<stdio.h>
int main()
{ int i,j;
        for(i=0;i<11;i++)
        { printf("\n");
                for(j=0;j<20;j++)
                {if(i%2==0 || j%2==0)
                        printf("*");
                        else
                                printf("0");
                }
        }
}

