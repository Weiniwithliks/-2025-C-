#include<stdio.h>
long long yst(int a);
int main()
{
    int N;
    scanf("%d",&N);
    printf("%lld\n",yst(N));
    return 0;
}
long long yst(int a)
{
    if(a==0) return 0;
    if(a==1||a==2)return 1;
    long long prev1=1,prev2=1,curr=0;
    for(int i=3;i<=a;i++)
    {
        curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    return curr;
}