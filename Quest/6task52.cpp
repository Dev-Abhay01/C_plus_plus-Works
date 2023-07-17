//wap to input 10 elements of array and print sum of odd elements.
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
	
	if (arr[i]%2==1)
	{
		sum=sum+arr[i];
		
	}
}
	printf("sum of odd array elements=%d",sum);
}
