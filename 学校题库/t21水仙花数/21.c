#include<stdio.h>
#include<math.h>
int sxhpd(int a)
{
    if(a<100||a>1000)return 0;
    int sum=0;
    int c=a;
    while (a!=0)
    {
        int temp=a%10;
        sum=sum+pow(temp,3);
        a=a/10;
    }
    if (c==sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i=0;
    scanf("%d",&n);
    while (1==1)
    {
        if(sxhpd(n-i))
        {
            printf("%d",n-i);
            break;
        }
        else if (sxhpd(n+i))
        {
            printf("%d",n+i);
            break;
        }
        else i=i+1;
    }
}