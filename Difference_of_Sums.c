#include<stdio.h>
#include<math.h>
int main()
{
    int n,sqr_d=0,sum_d=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        sqr_d+=i*i;
        sum_d+=i;
    }
    printf("%d",abs(sqr_d-sum_d*sum_d));
}