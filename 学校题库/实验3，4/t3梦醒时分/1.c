#include<stdio.h>
int main()
{
    int sh,sm,xh,xm;
    scanf("%d:%d %d:%d",&sh,&sm,&xh,&xm);
    int a1,a2;
    a1=sh+xh;
    a2=sm+xm;
    if(a2>=60)
    {
        a2=a2-60;
        a1++;
    }
    if(a1>=24)
    {
        a1=a1-24;
    }
    if(a1==0)
    {
        printf("00:");
    }
    else if(a1<10)
    {
        putchar('0');
        printf("%d:",a1);
    }
    else printf("%d:",a1);
    if(a2==0)
    {
        printf("00");
    }
    else if(a2<10)
    {
        putchar('0');
        printf("%d",a2);
    }
    else printf("%d",a2);
    return 0;
}