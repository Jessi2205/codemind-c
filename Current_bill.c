#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    float c,t;
    if (a<=199)
    {
        c=a*1.20;
        t=c+100;
    }
    else if (a>=200 && a<=400)
    {
        c=a*1.50;
        t=c+100;
    }
    else if (a>=400 && a<=600)
    {
        c=a*1.80;
        t=c+(c*0.15);
    }
    else
    {
        c=a*2.00;
        t=c+(c*0.15);
    }
    printf("%.2f",t);
}