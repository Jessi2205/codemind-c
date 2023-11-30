#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for (j=1;j<=n;j++)
    {
        for (i=1;i<=n;i++)
        {
            if (j%2==1)
            printf("1 ");
            else
            printf("0 ");
        }
        printf("
");
    }
}