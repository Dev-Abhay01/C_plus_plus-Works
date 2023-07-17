//wap to find factorial of a given number 1 to n
//6 : 1-6
#include<stdio.h>
int main()
{
	int i,fact=1,num;
	printf("enter a value : ");
	scanf("%d",&num);
	for( i=1;i<=num;i++)
{
	fact=fact*i;
}
	printf("factorial of %d is: %d",num,fact);
}

