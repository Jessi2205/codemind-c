#include<stdio.h>
int main()
{
    int f,i,sum=0;
    scanf("%d",&f);
    for (i=1;i<f;i++)
    {
        if (f%i==0)
        {
            sum+=i;
        }
    }
    printf("%d",sum);
}