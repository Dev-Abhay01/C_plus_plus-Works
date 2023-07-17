//wap to input 5 elements of array and print largest element.
#include<stdio.h>
int main()
{
	int arr[5],i,count=0,large;
	printf("enter 5 numbers : ");
	for(i=0;i<=4;i++)
    {
    	scanf("%d",&arr[i]);
    }
        large=arr[0];
    	for(i=0;i<=4;i++)
	{
	
	if (arr[i]>large)
	{
	large=arr[i];//it stores the value if the value is greater then arr[0]or we can say that grater then first input value-and then compare with next input value 
	//if the input value is grater then previous one then it can replace the value with smaller one
	}
}
	printf("largest number of an array is=%d",large);
}
