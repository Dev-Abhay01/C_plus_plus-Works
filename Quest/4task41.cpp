//wap to input 7 numbers from users and count total positive ,negative , zero numbers 
#include<stdio.h>
int main()
{
	int i,n,p=0,ne=0,zero=0;
	printf("enter 7 numbers : ");
	for(i=1;i<=7;i++)
	{
	scanf("%d",&n); 
	if(n>=0)
	p=p+1;
	else if(n<=0)
	ne=ne+1;
	else 
	zero=zero+1;
    } printf("total positive=%d , negative = %d , zero=%d ",p,ne,zero);
}
