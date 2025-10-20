#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,k;
    for(i=1;i<=n;i++)
    {
        int p=i%10;
        if(i==n)
        {
            for(k=1;k<=2*n-1;k++)
            printf("%d",p);
        }
        else if(i==1)
        {
            for(k=1;k<=n-1;k++)putchar(' ');
            printf("%d\n",p);
        }
        else
        {
            for(k=1;k<=n-i;k++)putchar(' ');
            printf("%d",p);
            for(k=1;k<=2*i-3;k++)putchar(' ');
            printf("%d\n",p);
        }
    }
}