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
    int e,flag=0;
    scanf("%d",&e);
    for (i=0;i<n;i++)
    {
        if (arr[i]==e) {
        flag=1;
        break;
        }
    }
    if (flag==0)
    printf("False");
    else
    printf("True");
}