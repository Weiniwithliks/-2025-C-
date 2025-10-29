#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,temp,now,result=1;
    scanf("%d",&now);
    for(i=2;i<=n;i++)
    {
        scanf("%d",&temp);
        if (temp==now)
        {
            //
        }
        else
        {
            result++;
            now=temp;
        }
    }
    printf("%d",result);
    return 0;
}