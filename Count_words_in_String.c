#include<stdio.h>
int main()
{
    char S[1001];
    scanf("%[^
]*c",S);
    int i,count=0;
    for (i=0;S[i]!=NULL;i++)
    {
        if (S[i]==32)
        {
            count++;
        }
    }
    printf("%d",count+1);
}