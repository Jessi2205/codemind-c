#include<stdio.h>
int main()
{
    int hf,sif,sef;
    scanf("%d%d%d",&hf,&sif,&sef);
    if (hf > 50 && sif > 60 && sef > 100)
    {
        printf("10");
    }
    else if (hf > 50 && sif > 60)
    {
        printf("9");
    }
    else if (sif > 60 && sef > 100)
    {
        printf("8");
    }
    else if (hf > 50 && sef > 100)
    {
        printf("7");
    }
    else if (hf > 50 || sif > 60 || sef > 100)
    {
        printf("6");
    }
    else 
    {
        printf("5");
    }
}