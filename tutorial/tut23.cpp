#include<stdio.h>
int main()
{
	int num;
	printf("enter a number :");
	scanf("%d",&num);	//12
	//remainder=0-even,1-odd
	switch(num%2)
	{
		case 0:
			printf("num is a even number");
			break;
		case 1:
		     printf("num is a odd number");
			 break;
		}
	}
