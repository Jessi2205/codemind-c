#include<stdio.h>
int main()
{
    char S[100];
    scanf("%[^
]",&S);
    int count=0;
    for (int i=0;S[i]!=NULL;i++)
    {
        if (S[i]>=97 && S[i]<=122)
        {
            count++;
        }
    }
    printf("%d",count);
}