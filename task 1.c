#include<stdio.h>
int main()
{int x,y;
printf("enter two numbers");
scanf("%d%d",&x,&y);
int t=max(x,y);
printf("%d",t);
return 1;

}
max(int x ,int y )
{
    int p;
    p=(x>y)?x:y;

    return p;
}
