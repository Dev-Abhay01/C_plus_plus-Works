//wap to store marks of 3 subjects of 4 students.and find total marks of all students.
#include<stdio.h>
int main()
{
	int marks [4][3],i,j,sum=0,su=0;
	for (i=0;i<=3;i++)
	{   printf("Enter  3 subject marks of %d student ",i+1);
		for(j=0;j<=2;j++)
	{
		scanf("%d",&marks[i][j]);
	}
	}
	printf("Marks of 2nd student = ");
	for(j=0;j<=2;j++)
    {
    	printf("%d",marks[1][j]);
    	printf("\n");
    	sum=sum+marks[1][j];
	}printf("total marks of 2nd student =%d",sum);
	printf("\n");
	printf("\n");
	{	
	printf("Marks of 4th student = ");
	for(j=0;j<=2;j++)
    {
    	printf("%d",marks[3][j]);
    	printf("\n");
    	su=su+marks[3][j];
	}printf("total marks of 3rd student =%d",su);
}
}
