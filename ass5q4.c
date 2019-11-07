#include<stdio.h>
int main()
{ int i,j;
        for(i=0;i<6;i++)
        { printf("\n");
                for(j=0;j<30;j++)
                {if(i%2==1 && (j%3==0 || j%5==0))
                        printf("*");
                        else
                                printf("0");
                }
        }
}

