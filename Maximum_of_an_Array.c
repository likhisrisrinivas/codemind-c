#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
     for(i=0;i<n;i++)
	{
	 if(max<arr[i])
	  {
	     max=arr[i];
	  }
	}
	printf("%d",max);
}