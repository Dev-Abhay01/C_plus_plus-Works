//wap to input a 4*4 matrix and change rows to column and column to rows.
#include<stdio.h>
int main()
{
	int arr[4][4],i,j;
	printf("Enter your number ");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	}printf("transpose of matrix=\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%d\t",arr[j][i]);
		}
	printf("\n");
}
}
