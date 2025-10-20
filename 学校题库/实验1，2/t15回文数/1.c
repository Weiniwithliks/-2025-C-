#include<stdio.h>
long long pown(int a);
int hw(long long ip);
int main()
{
    long long a;
    int number=0;
    long long ab[100];
    while (number<100)
    {
        if(scanf("%lld",&ab[number])==EOF)break;
        else
        {
            number++;
        }
    }
    int m;
    for(m=0;m<number;m++)
    {
        printf("%d %lld\n",hw(ab[m]),ab[m]);
    }
    return 0;
}
int hw(long long ip)
{
    int a[19];   //int64最大19位数
    int i,step=0;
    long long oip=ip;
    for(i=0;i<19; i++)
    {
        if(ip==0)break;
        a[i]=ip%10;
        ip=ip/10;
        step++;
    }
    long long op=0;
    int k;
    for(k=0;k<step;k++)
    {
        op=op+a[k]*pown(step-1-k);
    }
    if(oip==op)return 1;
    else return 0;
}
long long pown(int a)
{
    long long result=1;
    int j;
    for(j=0;j<a;j++)
    {
        result=result*10;
    }
    return result;
}

