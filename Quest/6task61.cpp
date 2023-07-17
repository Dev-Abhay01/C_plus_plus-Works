//wap to input 10 elements of array and print largest element.
//alternate mathod
#include<stdio.h>
int main()
{
	int ar[10],i,g;
	printf("enter 10 elements of arrays: ");
	for (i=0;i<=9;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=1;i<=9;i++)
	{
		if(g=ar[i])
		g=ar[i];
	}
	printf("greatest element is : %d ",g);
}
