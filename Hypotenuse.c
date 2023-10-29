#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    float hyp;
    scanf("%d%d",&a,&b);
    hyp=sqrt(pow(a,2)+pow(b,2));
    printf("%.2f",hyp);
}