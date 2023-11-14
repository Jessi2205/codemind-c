#include<stdio.h>
int main()
{
    float s,hra,da,gs;
    scanf("%f%f%f%f",&s,&hra,&da,&gs);
    float pf=0.12*s;
    gs=s+hra+da+pf;
    printf("%.2f
%.2f",pf,gs);
}