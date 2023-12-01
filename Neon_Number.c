#include<stdio.h>
int main()
{
    int n,m,sum=0;
    scanf("%d",&n);
    m=n*n;
    while (m>0)
    {
        sum=sum+(m%10);
        m=m/10;
    }
    if (sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}
