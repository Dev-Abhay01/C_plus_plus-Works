//wap to enter percentage 10 studnts and count how many students passed with first division
#include<stdio.h>
int main()
{
	int i,per,count=0;
	printf("enter the percentage of ten student: ");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&per);
		if(per>=90 && per<=100)
		count=count+1;
		
	}printf("total %d students passed with 1st devision",count);
}

 
