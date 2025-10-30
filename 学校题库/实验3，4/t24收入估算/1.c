#include<stdio.h>
typedef long long ll;
#define j 60000
int income_tax(int p, int d, int f);
int main()
{
    ll t;
    scanf("%lld",&t);
    ll pay;
    if(t==0)pay=60033;
    else if(t<1080)   pay=t*100/3+33+j;
    else if(t<11880)  pay=36000+(t-1080)*10+j+9;
    else if(t<43080)  pay=144000+(t-11880)*5+j+4;
    else if(t<73080)  pay=300000+(t-43080)*4+j+3;
    else if(t<145080) pay=420000+(t-73080)*100/30+j+3;
    else if(t<250080) pay=660000+(t-145080)*100/35+2+j;
    else              pay=960000+(t-250080)*100/45+2+j;
    if(income_tax(pay+1,0,0)==t)pay++;
    printf("%lld",pay);
    return 0;
}
int income_tax(int p, int d, int f)
{
    p=p-60000-d;
    int result;
    if(p<=0)return 0;
    else if(p<=36000)result=p*3/100;
    else if(p<=144000)result=1080+(p-36000)/10;
    else if(p<=300000)result=11880+(p-144000)/5;
    else if(p<=420000)result=43080+(p-300000)/4;
    else if(p<=660000)result=73080+(p-420000)*3/10;
    else if(p<=960000)result=145080+(p-660000)*35/100;
    else result=250080+(p-960000)*45/100;
    result=result-f;
    return result;
}