#include<stdio.h>
int main()
{
    int m,Hour,Minute;
    scanf("%d",&m);
    Hour=m/60;
    Minute=m%60;
    printf("%d Hour(s) %d Minute(s)",Hour,Minute);
}