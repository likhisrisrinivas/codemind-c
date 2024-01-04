#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,i;
    float sum=0.0;
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    {
        sum+=sqrt(i);
    }
    printf("%.2f",sum);
}