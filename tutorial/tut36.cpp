//wap to find sum of all number with in 1 to 10
//1,2,3,4,5,,6,7.....10
#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=10;i=i+1) //i=1
	{
		sum=sum+i; //0+1=1=1 +2=3 +3=6 +4 10
		printf("%d\n",sum);
	}
	//printf("%d\n",sum);
}
