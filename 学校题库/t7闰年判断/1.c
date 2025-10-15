#include<stdio.h>
int main()
{
    int Y;
    scanf("%d",&Y);
    if (Y%100==0)
    {
        if(Y%400==0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        if(Y%4==0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }   
    }
    return 0;
}