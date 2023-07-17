//wap to input a 3*4 matrix and print only third and fourth column value.
#include<stdio.h>
int main()
{	
    int arr[3][4],i,j;
    printf("Enter your number");
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	}
	printf("third column of matrix elements are=");
		for(i=0;i<=2;i++)
		{
			printf("%d\n",arr[i][2]);
		}
		printf("\n");
		{
		
		printf("fourth column of matrix elements are=");
		for(i=0;i<=2;i++)
		{
			printf("%d\n",arr[i][3]);
		}
      }
	}
	
	
