#include<stdio.h>
int main()
{
    int N,i,count=0;
    scanf("%d",&N);
    for (i=1 ; i<=N ; i++)
    {
        if (N%i==0)
        {
            count++;
        }
    }
    if (count==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}