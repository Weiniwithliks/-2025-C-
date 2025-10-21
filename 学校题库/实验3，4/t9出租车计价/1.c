#include<stdio.h>
int main()
{
    int d,w;
    scanf("%d%d",&d,&w);
    int p1,p2,sum;
    if(d<=3)p1=10;
    else if(d<=10)p1=10+(d-3)*2;
    else p1=24+(d-10)*3;
    p2=(w/5)*2;
    sum=p1+p2;
    printf("%d",sum);
    return 0;
}