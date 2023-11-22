#include<stdio.h>
int main()
{
    int A,B,i;
    scanf("%d%d",&A,&B);
    for (i=A+1;i<B;i++)
    {
        printf("%d %d %d
",i,i*i,i*i*i);
    }
}