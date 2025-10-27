long long mod_pow(long long b, long long n, long long m)
{
    // ����ģ���������ʣ�b? mod m = ((b mod m)?) mod m
    long long result=1;
    b=b%m;
    while (n>0)
    {
        if(n&1)  //n&1=1����n������
        {
            result=(result*b)%m;
        }
        b=(b*b)%m;
        n>>=1;  //�ȼ���n/2���Ǹ���
    }
    return result;
}
/*    
long long llpow(long long x,long long y)
{
    long long i,op=1;
    for(i=1;i<=y;i++)
    {
        op=op*x;
    }
    return op;
}
long long mod_pow(long long b, long long n, long long m) //���b^n%m���������
{
    long long result,temp;
    if((n&1)==0)
    {
        temp=llpow(b*b,n/2);
    }
    else
    {
        temp=llpow(b*b,(n-1)/2)*b;
    }
    result=temp%m;
    return result;
}
*/