#include<stdio.h>
int main()
{
    int j,A,B;
    scanf("%d%d",&A,&B);
    for (j=B ; j>=A ; j--)
    {
        printf("%d ",j);
    }
}