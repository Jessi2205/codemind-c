#include<stdio.h>
int main()
{
    int b1,b2,h;
    scanf("%d%d%d",&b1,&b2,&h);
    float area =h*(b1+b2)*0.5;
    printf("%.4f
",area);
}