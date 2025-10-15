#include<stdio.h>
int zfpd(char c);
int main()
{
    int AULDS[5]={0,0,0,0,0};
    char abc[5]={'A','U','L','D','S'};
    int count=0;
    char c;
    while (count<1000)
    {
        if(scanf(" %c",&c)==EOF)break;
        else
        {
            int temp=zfpd(c);
            if(temp==1)
            {
                AULDS[3]+=1;
            }
            else if(temp==2)
            {
                AULDS[0]+=1;
                AULDS[2]+=1;
            }
            else if(temp==3)
            {
                AULDS[0]+=1;
                AULDS[1]+=1;
            }
            else if(temp==4)
            {
                AULDS[4]+=1;
            }
        }
    }
    int i;
    for(i=0;i<5;i++)
    {
        printf("%c:%d\n",abc[i],AULDS[i]);
    }
    return 0;
}
int zfpd(char c)
{
    int a=c;
    if(a>='0'&&a<='9')
    {
        return 1;
    }
    else if(a>='a'&&a<='z')
    {
        return 2;
    }
    else if(a>='A'&&a<='Z')
    {
        return 3;
    }
    else
    {
        return 4;
    }
}
