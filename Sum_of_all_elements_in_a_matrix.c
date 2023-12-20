#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int mat[n][m];
    int i,j,sum=0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            sum+=mat[i][j];
        }
    }
    printf("%d",sum);
}