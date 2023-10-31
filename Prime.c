#include<stdio.h>
int main()
{
    int m,n,count=0;
    scanf("%d",&n);
    for (m=1 ; m<=n ; m++)
    {
        if (n%m==0)
        {
            count++;
        }
    }
    if (count==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}