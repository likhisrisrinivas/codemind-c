#include<stdio.h>
int main()
{
    int bs;
    float da,har,gs;
    scanf("%d",&bs);
    if(bs<=10000)
    {
        da=bs*0.80;
        har=bs*0.20;
        gs=bs+da+har;
    }
    else if(bs<=20000)
    {
        da=bs*0.90;
        har=bs*0.25;
        gs=bs+da+har;
    }
    else
    {
        da=bs*0.95;
        har=bs*0.30;
        gs=bs+da+har;
    }
    printf("%.2f",gs);
}