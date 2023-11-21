#include<stdio.h>
int main()
{
	int i,n,dp=1;
	scanf("%d",&n);
	for (i=n;i>=1;i--)
	{
		dp=dp*i;
	}
	printf("%d",dp);
}