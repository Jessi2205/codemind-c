#include<stdio.h>
int main()
{
    int n,sum=0,ave,b=0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
    ave = sum/n;
    for(int i = 0 ; i < n ; i++)
    {
        if(ave<=arr[i])
        {
            b++;
        }
    }
    printf("%d",b);
}