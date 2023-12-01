#include<stdio.h>
int main()
{
    int n,sum=0,l,f;
    scanf("%d",&n);
    l=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    f=n;
    sum=f+l;
    printf("%d",sum);
}