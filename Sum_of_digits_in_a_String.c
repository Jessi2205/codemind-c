#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[1001];
    scanf("%[^
]",str);
    int sum=0;
    for (int i=0;str[i]!=NULL;i++)
    {
        if (isdigit(str[i])!=0)
        {
            sum+=(str[i]-48);
        }
    }
    printf("%d",sum);
}