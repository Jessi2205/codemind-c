#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int res=0;
    for (i=1;i<n;i++)
    {
        if (n%i==0)
        {
            res=res+i;
        }
    }
    if (n<res)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}