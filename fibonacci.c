#include<stdio.h>
int main()
{
    int n,i,a,b,sum=0;
    scanf("%d",&n);
    a=0;
    b=1;
    while(n>0)
    {
        printf("%d ",sum);
        n--;
        a=b;
        b=sum;
        sum=a+b;
    }
}