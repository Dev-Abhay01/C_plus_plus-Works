//wap to input 5 numbers from users and find sum of them
#include<stdio.h>
int main()
{
	int i,n,sum;
	printf("enter 5 numbers :");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&n); //20 , 1
		sum=sum+n; //0+20=20+1=21
	}
	printf("sum of all values =%d",sum);
}
