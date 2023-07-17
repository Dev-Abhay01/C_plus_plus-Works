//wap to find protuct of 1 to 5
#include<stdio.h>
int main()
{
	int i,product=1;
	printf("enter starting of series : ");
	scanf("%d",&i);
	for( i=1; i<=5;i++)
	{
		product=product*i;
	}
	printf("product = %d",product);
}
