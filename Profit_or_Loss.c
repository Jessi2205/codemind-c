#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (b > a)
    {
        printf("Profit");
    }
    else if (a > b)
    {
        printf("Loss");
    }
    else
    {
        printf("No Profit and No Loss");
    }
}