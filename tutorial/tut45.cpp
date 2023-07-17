//wap to input 10 numbers and print sum of all
#include<stdio.h>
int main()
{
	int arr[10],i,sum=0;
	printf("enter 10 numbers : ")
	for(i=0;i<=9,i++)
    {
    	scanf("%d",&arr[i]);
    	
	}
	for(i=0;i<=9;i++)
	{
		sum=sum+arr[i];
		
	}
	printf("sum of array elements=%d",sum);
}
