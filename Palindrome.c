#include<stdio.h>
int main()
{
    int p,P,rev=0;
    scanf("%d",&p);
    P=p;
    while (p>0)
    {
        rev=rev*10+(p%10);
        p=p/10;
    }
    if (rev==P)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}