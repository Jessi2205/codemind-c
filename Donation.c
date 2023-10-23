#include<stdio.h>
int main()
{
    int X,Y,Z;
    scanf("%d%d%d",&X,&Y,&Z);
    Z=Y-X;
    if (Y>X)
    {
        printf("%d",Z);
    }
}