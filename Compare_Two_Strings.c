#include<stdio.h>
#include<string.h>
int main()
{
    char str_1[100],str_2[100];
    scanf("%s %s",&str_1,&str_2);
    if (strcmp(str_1,str_2)==0)
    printf("Strings are Equal");
    else
    printf("Strings are not Equal");
}