#include<stdio.h>
int main()
{
    int n,m,sum=0,p=1;
    scanf("%d",&n);
    m=n;
    while (n>0)
    {
        int i=n%10;
        sum=sum+i;
        n=n/10;
    }
    while (m>0)
    {
        int j=m%10;
        p=p*j;
        m=m/10;
    }
    if (sum==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}