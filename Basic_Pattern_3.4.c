#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for (j=n;j>=1;j--)
    {
        for (i=n;i>=1;i--)
        {
            if (i<=j)
            {
                printf("%c ",j+64);
            }
        }
        printf("
");
    }
}