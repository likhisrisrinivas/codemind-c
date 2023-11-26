#include <stdio.h>
 int main()
{
    int n;
    scanf("%d",&n);
    int sum=0,i=1;
    while(i<=n)
    sum += i++;
    printf("%d",sum);
}