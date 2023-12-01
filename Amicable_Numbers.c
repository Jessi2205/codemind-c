#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int sum=0,rev=0;
    for (i=1;i<n;i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
    }
    for (j=1;j<m;j++)
    {
        if (m%j==0)
        {
            rev=rev+j;
        }
    }
    if ((n==rev)&&(m==sum))
    printf("Amicable");
    else
    printf("Not Amicable");
}