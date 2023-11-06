#include<stdio.h>
int main()
{
    int A,B,i;
    scanf("%d%d",&A,&B);
    for (i=1 ; i<=B ; i++)
    {
        if (A*i%B==0)
        {
            printf("%d",A*i);
            break;
        }
    }
}