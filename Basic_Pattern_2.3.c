#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for (j=65;j<=64+n;j++)
    {
        for (i=65;i<=64+n;i++)
        {
            if (i<=j)
            printf("%c ",i);
        }
        printf("
");
    }
}