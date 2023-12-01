#include<stdio.h>
int main()
{
    int n,remider,largest=0;
    scanf("%d",&n);
    while(n>0)
    {
        remider=n%10;
        if(largest<remider)
        {
            largest=remider;
        }
        n=n/10;
    }
    printf("%d ",largest);
}