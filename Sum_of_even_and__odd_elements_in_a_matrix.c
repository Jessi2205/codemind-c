#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int mat[n][m];
    int sum=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (mat[i][j]%2==0)
            sum+=mat[i][j];
        }
    }
    printf("%d ",sum);
    int sum_2=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (mat[i][j]%2==1)
            sum_2+=mat[i][j];
        }
    }
    printf("%d ",sum_2);
}