#include<stdio.h>
int main()
{
    int a;
    for(a=0;a<=100;a++)
    {
        if(a<10&&a%2!=0||a>10&&a<20&&a%2==0)
        printf("%d\n",a);
        if(a>20&&a<30&&a%2!=0||a>30&&a<40&&a%2==0)
            printf("%d\n",a);
            if(a>40&&a<50&&a%2!=0)
                printf("%d\n",a);
        if(a>60&&a<70&&a%2!=0||a>50&&a<60&&a%2==0)
            printf("%d\n",a);
        if(a>80&&a<90&&a%2!=0||a>70&&a<80&&a%2==0)
            printf("%d\n",a);
        if(a>90&&a<100&&a%2==0)
            printf("%d\n",a);

    }
}
