//wap to enter 5 numbers from user and count total even number within all 
//wap to input 5 numbers from user and count total positive and negative number
#include<stdio.h>
int main()
{
	int i,n,p=0,ne=0;
	printf("enter 5 numers : ");
	for(i=1;i<=5;i++)
	{
	scanf("%d",&n); //n==-30=negative n=30=positive
	if(n>=0)
	p=p+1;
	else
	ne=ne+1;
    } printf("total positive=%d , negative = %d",p,ne);
}

