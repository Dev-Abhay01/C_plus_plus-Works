//is 3
#include<stdio.h>
int main()
{
	int num,n;
	printf("enter the last number of series: ");
	scanf("d",&n);
	for(num=3;num<=n;num++)
	{
		if(num%10==3)
		printf("%d\n",num);
	}
}
