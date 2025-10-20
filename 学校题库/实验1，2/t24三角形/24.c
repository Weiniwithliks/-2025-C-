#include<stdio.h>
#include<math.h>
int pd(double a,double b,double c)
{
    if(a+b>c&&a+c>b&&b+c>a)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
double square(double a,double b,double c)
{
    double t=(a+b+c)/2.0;
    double op=sqrt(t*(t-a)*(t-b)*(t-c));
    return op;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    double answer[n];
    for(i=0;i<n;i++)
    {
        double l1,l2,l3;
        scanf("%lf%lf%lf",&l1,&l2,&l3);
        if(pd(l1,l2,l3)==-1)
        {
            answer[i]=-1.0;
        }
        else
        {
            answer[i]=square(l1,l2,l3);
        }
    }
    int k;
    for(k=0;k<n;k++)
    {
        if(answer[k]!=-1.000000)printf("%.2lf\n",answer[k]);
        else printf("%d\n",-1);
    }
    return 0;
}