#include<stdio.h>
double df(double a)
{
    double p1=0.5469;
    double p2=0.5469+0.05;
    double p3=0.5469+0.3;
    double result;
    if(a<=210)result=a*p1;
    else if(a<=400)result=a*p2;
    else result=a*p3;
    return result;
}
int main()
{
    double sum=0;
    int i=0;
    while (i<=11)
    {
        double temp;
        scanf("%lf",&temp);
        sum=sum+df(temp);
        i++;
    }
    printf("%.2lf",sum);
    return 0;
}