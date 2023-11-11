#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int H,M,S;
    H=t/3600;
    M=(t%3600)/60;
    S=(t%3600)%60;
    printf("H:M:S-%d:%d:%d",H,M,S);
}