#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>50&&b<a&&c<a)
    {
        printf("Gryffindor");
    }
    else if(b>50&&a<b&&c<b)
    {
        printf("Slytherin");
    }
    else if(c>50&&a<c&&b<c)
    {
     printf("Hufflepuff");
    }
    else
    {
      printf("NOTA"); 
    }
}