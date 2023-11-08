#include<stdio.h>
int main()
{
    int n,N,rev=0;
    scanf("%d%d",&n,&N);
    N=n;
    while (n>0)
    {
        rev = rev*10+(n%10);
        n=n/10;
    }
    if (rev==N)
    {
        printf("True");
    }
    else 
    {
        printf("False");
    }
}