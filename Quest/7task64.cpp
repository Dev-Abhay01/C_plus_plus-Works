//wap to input a 3*3 matrix and print only diagonal elements of matrix.
#include<stdio.h>
int main()
{	
    int arr[3][3],i,j;
    printf("Enter your number");
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	}
	printf("diagonal elements of matrix are= \n");
	for (i=0;i<=2;i++)
	{
		for(j=i;j==i;j++)
		{
			printf("%d\n",arr[i][j]);
		}
	}
	}
	
