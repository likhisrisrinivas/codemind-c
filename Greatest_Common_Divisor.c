#include<stdio.h>
int main()
{
    int X,Y,HCF=0,i,min;
    scanf("%d%d",&X,&Y);
    min=(X>Y)?Y:X;
    for(i=1;i<=min;i++)
    {
        if(X%i==0 && Y%i==0)
        HCF=i;
    }
    printf("%d",HCF);
}