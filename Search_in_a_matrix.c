#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int mat[n][m];
	int i,j;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	int num,flag=0;
	scanf("%d",&num);
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			if (num==mat[i][j])
			flag++;
		}
	}
	if (flag>0)
	printf("1");
	else
	printf("0");
}