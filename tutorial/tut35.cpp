//wap to print all numbers that is divisible by 3 with in 3 to n
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the last series : ");
	scanf("%d",&n);
	for(i=3;i<=n;i=i+1)
	{
		if(i%3==0)
		printf("%d\n",i);
	}
}
