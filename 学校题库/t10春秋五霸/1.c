#include<stdio.h>
int main()
{
    int Q,S,M,J,C;
    scanf("%d%d%d%d%d",&Q,&S,&M,&J,&C);
    int val[5]={Q,S,M,J,C};
    char code[5]={'Q','S','M','J','C'};
    int i,h;
    for(h=0;h<4;h++)
    {
        for(i=0;i<4;i++)
        {
            if (val[i]<val[i+1])
            {
                char temp1;
                int temp2;
                temp1=code[i];
                temp2=val[i];
                val[i]=val[i+1];
                code[i]=code[i+1];
                val[i+1]=temp2;
                code[i+1]=temp1;
            }
        }
    }
    int k;
    for (k=0;k<5;k++)
    {
        if(k==4)
        {
            printf("%c",code[k]);
        }
        else
        {
            printf("%c ",code[k]);
        }
    }
    return 0;
}