#include<stdio.h>
int main()
{
    int i, n, x,z=0,k, s=0;
    printf("Give n: ");
    scanf("%d", &n);
    printf("\nInput the value of K: ");
    scanf("%d",&k);
    printf("Give %d numbers: \n", n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if (x%2==0)
        z++;
        if (z>k)
        s=s+x;
    }
    printf("OUTPUT: %d\n", s);
}