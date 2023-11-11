#include<stdio.h>
int main()
{
    int days;
    scanf("%d",&days);
    printf("%d
",days/365);
    printf("%d
",(days%365)/7);
}