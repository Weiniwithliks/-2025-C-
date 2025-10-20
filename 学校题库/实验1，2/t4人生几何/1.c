#include<stdio.h>
int main()
{
    long long year,second;
    scanf("%lld",&year);
    second=year*365*24*60*60;
    printf("%lld",second);
    return 0;
}