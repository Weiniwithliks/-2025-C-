#include<stdio.h>
int main()
{
    int grade;
    scanf("%d",&grade);
    char result;
    if(grade>=90)
    {
        result='A';
    }
    else if(grade>=80)
    {
        result='B';
    }
    else if(grade>=70)
    {
        result='C';
    }
    else if(grade>=60)
    {
        result='D';
    }
    else
    {
        result='E';
    }
    printf("%c",result);
    return 0;
}