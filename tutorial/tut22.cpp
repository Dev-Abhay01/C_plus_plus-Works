#include<stdio.h>
int main( )
{
	int day;
	printf("enter number of date");
	scanf("%d",&day);	
	switch(day)
	{
		case 1:
			printf("monday");
			break;
		case 2:
			printf("tuesday");	
			break;
		case 3:
			printf("wednesday");	
			break;
		default :
		    printf("Invalid day number");
			break;	
	}
}

