#include<stdio.h>
int main()
{
    int x1,x2,max;
    scanf("%d%d",&x1,&x2);
    max=(x1>x2)?x1:x2;
    while(1)
    {
        if((max%x1==0)&&(max%x2==0))
        {
            printf("%d",max);
            break;
        }
        ++max;
    }
}