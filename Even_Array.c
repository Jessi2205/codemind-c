#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag=1;
    for (i=0;i<n;i++)
    {
        if (arr[i]%2!=0)
        flag=0;
    }
    if (flag==0)
    printf("False");
    else
    printf("True");
}