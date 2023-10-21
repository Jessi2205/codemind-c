#include<stdio.h>
int main()
{
    int X,Y,Z;
    scanf("%d%d%d",&X,&Y,&Z);
    Z=X-Y;
    if (X <= Y)
    {
        printf("%d",0);
    }
    else 
    {
        printf("%d",Z);
    }
}