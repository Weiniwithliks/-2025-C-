// �˴����Զ��帨��������
unsigned long long factorial(int n)       //����׳�
{
    if(n==0)return 1;
    else
    {
        int i;
        unsigned long long result=1;
        for(i=1;i<=n;i++)
        {
            result*=i;
        }
        return result;
    }
}
/*
* ���������C(n, k)������n����ͬԪ��ѡ��k������Ϸ���������
*/
long long comb(int n, int k)
{
    long long result=factorial(n)/(factorial(k)*factorial(n-k));           
    return result;
}