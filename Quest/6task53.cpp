//wap to input 10 elements of array and count how many elements are divisible by 5.
#include<stdio.h>
int main()
{
	int arr[10],i,sum=0;
	printf("enter 10 numbers : ");
	for(i=0;i<=9;i++)
    {
    	scanf("%d",&arr[i]);
    	
	}
	for(i=0;i<=9;i++)
	{
	
	if (arr[i]%5==0)
	{
		sum=sum+1;
		
	}
}
	printf("elements that are divisible by 5 are=%d",sum);
}
