//wap  to count  sum of total numbers divisible by 3 within 1 to n
#include<stdio.h>
int main()
{
	int i,n,c=0;
	printf("enter last series of loop : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0)
		c=c+1;
	}
	printf("total numbers divisible by 3 is: %d",c);
}
