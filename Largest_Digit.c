#include<stdio.h>
int main()
{
    int n,rev=0,largest=0;
    scanf("%d",&n);
    while (n>0)
    {
        rev=n%10;
        if (rev>largest)
        {
        	largest=rev;
		}
		n=n/10;
    }
    printf("%d",largest);
}