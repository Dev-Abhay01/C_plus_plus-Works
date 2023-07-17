//wap to input all elements of 3*3 matrix and print only second column value of matrix.
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
	printf("second column of matrix elements are=");
		for(j=0;j<=2;j++)
		{
			printf("%d",arr[1][j]);
		}
	}
	
