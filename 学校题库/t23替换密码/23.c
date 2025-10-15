#include<stdio.h>
int th(char a,int c)
{
    int b=a;
    int i;
    for(i=1;i<=c;i++)
    {
        if(b!='Z')
        {
            b=b+1;
        }
        else
        {
            b='A';
        }
    }
    return b;
}
int main()
{
    int d, k = 0;
    char c;
    scanf("%d",&d);
    while (1)
    {
        if(scanf(" %c", &c)==EOF)break;
        else
        {
            if(k==5)
            {
                printf(" ");
                k=0;
            }
            printf("%c",th(c,d));
            k++;
        }
    }
    return 0;
}