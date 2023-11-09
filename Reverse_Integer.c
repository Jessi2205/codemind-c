#include<stdio.h>
int main()
{
    int i,N,rev=0;
    scanf("%d",&N);
    while (N<0 || N>0)
    {
        rev=rev*10+N%10;
        N=N/10;
    }
    printf("%d",rev);
}