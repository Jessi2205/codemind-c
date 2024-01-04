#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int mat_1[n][m];
    int i,j;
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&mat_1[i][j]);
        }
    }
    int a,b;
    scanf("%d%d",&a,&b);
    int mat_2[a][b];
    for(i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            scanf("%d",&mat_2[i][j]);
        }
    }
    for(i=0;i<a,i<n;i++)
    {
        for (j=0;j<b,j<m;j++)
        {
            printf("%d ",mat_1[i][j]+mat_2[i][j]);
        }
        printf("
");
    }
}