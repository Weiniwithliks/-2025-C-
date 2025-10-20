#include<stdio.h>
int tj(int ip,int n);
int main()
{
    int d,a,b;
    scanf("%d%d%d",&d,&a,&b);
    int sum=0;
    int i;
    for(i=a;i<=b;i++)
    {
        sum=sum+tj(i,d);
    }
    printf("%d",sum);
    return 0;
}
int tj(int ip,int n)
{
    int op=0;
    while (ip!=0)
    {
        int temp=ip%10;
        if(temp==n)op++;
        ip=ip/10;
    }
    return op;
}