#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i=a;
    if (a%b==0)
    printf("0");
    while(a%b!=0)
    {
        a=a+1;
        if (a%b==0)
        {
            printf("%d",a-i);
        }
    }
}