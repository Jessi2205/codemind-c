#include<stdio.h>
int main()
{
    int N,A,B,i;
    scanf("%d%d%d",&N,&A,&B);
    for (i=A;i<=B;i++)
    {
        printf("%d x %d = %d
",N,i,N*i);
    }
}