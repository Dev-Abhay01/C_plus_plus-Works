//wap to print all even number with in n-40
#include<stdio.h>
int main()
{
	int i;
	printf("enter a starting of series : ");
	scanf("%d",&i);
	for(  ; i<=40 ; i=i+2)
	{
		printf("%d\n",i);
	}
}
