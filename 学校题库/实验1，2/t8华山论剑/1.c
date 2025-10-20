#include<stdio.h>
int max(int x,int y);
int main()
{
    int a1,a2,a3,a4,a5;
    scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
    a2=max(a1,a2);
    a3=max(a2,a3);
    a4=max(a3,a4);
    a5=max(a4,a5);
    printf("%d",a5);
    return 0;
}
int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}