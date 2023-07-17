//wap to input 3*3 matrix and change rows to columns and columns to rows
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
	//print matrix into transpose format
	printf("Transpose matrix =\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",arr[j][i]);
			
		}printf("\n");
	}
}
