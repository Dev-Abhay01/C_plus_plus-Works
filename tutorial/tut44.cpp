/*wap to input percentage of 10 student and print division of all students.*/
#include<stdio.h>
int main()
{
	int per[10],i;
	printf("enter percentage of all 10 students : ");
	for(i=0;i<=9;i++)
	{
	scanf("%d",&per[i]);
	}
	for(i=0;i<=9;i++)
	{
		if(per[i]>=0 && per[i]<=32)
		printf("Result of %d student is fail\n",i+1);
		else if(per[i]>=33 && per[i]<=44)
		printf("Result of %d student is third division\n",i+1);
		else if(per[i]>=45 && per[i]<=59)
		printf("Result of %d student is second division\n",i+1);
		else if(per[i]>=60 && per[i]<=100)
		printf("Result of %d student is first division\n",i+1);
		else 
		printf("Result of %d student can not be calculated\n",i+1);
	}
}
