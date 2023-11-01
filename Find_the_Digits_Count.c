#include<stdio.h>
int main()
{
    int n,dc=0;
    scanf("%d",&n);
    while (n>0)
    {
        dc++;
        n=n/10;
    }
    printf("%d",dc);
}