#include<stdio.h>
int main()
{
    int a,f,t=1;
    printf("enter any number");
    scanf("%d",&a);
    {
       for(f=a;f>=a;f--)
        t=t*f;
       printf("%d",t);
       return(t);
    }
}
