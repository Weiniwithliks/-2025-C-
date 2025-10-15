#include<stdio.h>
int main()
{
    int H,F,cxk,tuzi;
    scanf("%d%d",&H,&F);
    tuzi=(F-2*H)/2;
    cxk=H-tuzi;
    printf("%d %d",cxk,tuzi);
}