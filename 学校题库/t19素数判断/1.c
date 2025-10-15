#include<stdio.h>
#include<math.h>
int prime( int p )
{
    int k=3,temp=1;
    if (p==1)
    {
        return 0;
    }
    else if(p==2)
    {
        return 1;
    }
    else if(p%2==0)              //��ȥ��ż���������ѭ��������һ��
    {
        return 0;
    }
    else
    {
        while (k<=sqrt(p)+1)        //ԭ��ʹ��k*k<p�������
        {
            if (p%k==0)
            {
                temp=0;
                break;
            }
            else
            {
                k=k+2;
            }
        }
        if(p<=0)
        {
            temp=0;
        }
    }
    return temp;
}
int main()
{
    int N;
    scanf("%d",&N);
    int i;
    int a[N];
    for(i=0;i<N;i++)
    {
        int ip;
        scanf("%d",&ip);
        a[i]=ip;
    }
    int k;
    for(k=0;k<N;k++)
    {
        printf("%d %d\n",prime(a[k]),a[k]);
    }
    return 0;
}