#include<stdio.h>
int huan(int a);
int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    int op[n];
    while (i<n)
    {
        int ip;
        scanf("%d",&ip);
        op[i]=huan(ip);
        i++;
    }
    int k;
    for(k=0;k<n;k++)
    {
        printf("%d\n",op[k]);
    }
    return 0;
}
int huan(int a)
{
    int answer=0;
    answer=a/100+(a%100)/50+((a%100)%50)/20+(((a%100)%50)%20)/10+((((a%100)%50)%20)%10)/5+(((((a%100)%50)%20)%10)%5)/2+((((((a%100)%50)%20)%10)%5)%2)/1;
    return answer;
}