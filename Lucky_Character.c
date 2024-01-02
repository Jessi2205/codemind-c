#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    for(int i = 0 ; i <= 10 ; i++)
    {
        scanf("%c",&str[i]);
    }
    printf("%c",str[6]);
}