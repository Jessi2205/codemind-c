#include<stdio.h>
int main()
{
    int n,m,dp=1,ds=0;
    scanf("%d",&n);
    while (n>0)
    {
        m=n%10;
        dp=dp*m;
        ds=ds+m;
		n=n/10;
    }
    printf("%d",dp-ds);
}