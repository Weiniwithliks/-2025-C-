#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    long long sum=0;
    int k;
    for(k=0;k<n;k++)
    {
        sum=sum+a[k];
        printf("%lld",sum);
        if(k!=n-1)printf(" ");
    }
    return 0;
}