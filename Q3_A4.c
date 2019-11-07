#include<stdio.h>
int main()
{
    int i,a;
    printf("enter the limit");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       if(i<=50&&i%2==0)
        printf("even no %d\n",i);

       if(i>50&&i%2!=0)
         printf("odd no %d\n",i);
    }

}
