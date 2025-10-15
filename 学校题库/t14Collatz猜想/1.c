#include<stdio.h>
long long max(long long a,long long b);
int main()
{
    long long n;
    scanf("%lld",&n);
    long long maxn=n,step=0;
    while (n!=1)
    {
        if(n&1)
        {
            n=3*n+1;
            maxn=max(maxn,n);
            step++;
        }
        else
        {
            n=n/2;
            maxn=max(maxn,n);
            step++;
        }
    }
    printf("%lld %lld",step,maxn);
    return 0;
}
long long max(long long a,long long b)
{
    if(a>b) return a;
    else return b;
}

