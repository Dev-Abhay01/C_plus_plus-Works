//wap to add all number which is divisible by 3 and 5 within n to 50
#include<stdio.h>
int main()
{
	int i,sum=0;
	printf("enter starting of series : ");
	scanf("%d",&i);
	for( ; i<=50;i++)
	{
		if(i%3==0 && i%5==0)
		sum=sum+i;
	}
	printf("sum= %d",sum);
}
