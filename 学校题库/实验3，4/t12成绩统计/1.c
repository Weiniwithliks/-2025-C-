#include<stdio.h>
int main()
{
    double sum=0,n=0;
    int max=0,min=100;
    int rank[5]={0,0,0,0,0};
    while(1)
    {
        int grade;
        scanf("%d",&grade);
        if(grade==-1)break;
        else
        {
            sum=sum+grade;
            n++;
            max=(max>grade)?max:grade;
            min=(min<grade)?min:grade;
            if(grade>=90)rank[0]++;
            else if(grade>=80)rank[1]++;
            else if(grade>=70)rank[2]++;
            else if(grade>=60)rank[3]++;
            else rank[4]++;
        }
    }
    double average=sum/n;
    printf("%.1lf %d %d %d %d %d %d %d",average,max,min,rank[0],rank[1],rank[2],rank[3],rank[4]);
    return 0;
}