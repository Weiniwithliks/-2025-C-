#include<stdio.h>
#include<math.h>
int main()
{
    long long a,i=3;
    scanf("%lld",&a);
    long long c=a;
    printf("%lld = ",c);
    while (a!=1)
    {
        if(a%2==0)
        {
            printf("%d",2);
            a=a/2;
            if(a!=1)printf(" * ");
            continue;
        }
        if (a%i==0)
        {
            printf("%lld",i);
            a=a/i;
            if(a!=1)printf(" * ");
            continue;
        }
        if(i>sqrt(c))
        {
            printf("%lld",a);
            break;
        }
        i=i+2;
    }
}