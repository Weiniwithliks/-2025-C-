#include<stdio.h>
int main()
{
    int c=getchar();
    if(c>='0'&&c<='9')
    {
        int num;
        num=c-'0';
        if(num%2==0)   //ԭ���� if(c-'0'%2==0),�ǲ��Եģ�����������0%2������������c-0
        {
            putchar('E');
        }
        else
        {
            putchar('O');
        }
    }
    else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            putchar('v');
        }
        else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            putchar('V');
        }
        else if(c>='a'&&c<='z')
        {
            putchar('c');
        }
        else
        {
            putchar('C');
        }
    }
    else
    {
        putchar('S');
    }
}