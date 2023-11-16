#include<stdio.h>
int main()
{
    int n,i,sum=1;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (n%10==0)
        {
            sum+=n;
            while (n>0)
            break;
        }
    }
    printf("%d",sum+n%10);
}