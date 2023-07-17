//wap to input 10 elements of array and find how many times even values are presents here.
#include<stdio.h>
int main()
{
	int arr[10],i,count=0;
	printf("enter 10 numbers : ");
	for(i=0;i<=9;i++)
    {
    	scanf("%d",&arr[i]);
    	
	}
	for(i=0;i<=9;i++)
	{
	
	if (arr[i]%2==0)
	{
		count=count+1;
		
	}
}
	printf("total numbers of even value present here are =%d",count);
}
