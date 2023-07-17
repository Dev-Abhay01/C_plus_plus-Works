//wap to input 10 elements of array and print array elements in decreasing order of indexing
#include<stdio.h>
int main()
{
	int per[10],i;
	printf("enter all the 10 numbers : ");
	for(i=0;i<=9;i++)
	{
	scanf("%d",&per[i]);
	}
		for(i=9;i>=0;i--)
		{
			printf("arrays in decreasing order are %d\n",i);
		}
}
