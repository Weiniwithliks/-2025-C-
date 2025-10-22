#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double x;
    scanf("%d%lf",&n,&x);
    int i=1;
    double sum=0;
    while (i<=n)
    {
        double a,k;
        scanf("%lf%lf",&a,&k);
        sum=sum+a*pow(x,k);
        i++;
    }
    printf("%.2lf",sum);
    return 0;
}