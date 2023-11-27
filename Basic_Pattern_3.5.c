#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for (j=n;j>=1;j--)
    {
        for (i=1;i<=n;i++)
        {
            if (i<=j)
            {
                printf("%c ",i+64);
            }
        }
        printf("
");
    }
}