#include<stdio.h>
int main()
{
    int N,K,M;
    scanf("%d%d%d",&N,&K,&M);
    if (N%(K*M)==0)
    printf("%d",N/(K*M));
    else
    printf("%d",N/(K*M)+1);
}