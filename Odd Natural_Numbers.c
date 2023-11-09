#include<stdio.h>
int main()
{
    int i,o;
    scanf("%d",&o);
    for (i=1;i<=o;i++)
    {
        if (i%2==1)
        {
            printf("%d ",i);
        }
    }
}