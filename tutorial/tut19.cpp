#include<stdio.h>
int main ()
{
	int s1,s2,s3,per;
	printf("enter marks of 3 subject: ");
	scanf("%d%d%d",&s1,&s2,&s3);
	per=((s1+s2+s3)*100)/300;
	if (per<0)
	{
		if (per>=60 && per<=100)
		printf("first division");
	}
	else if (per>=33 && per<=59)
	{
		printf("second division");
	
	}
	else if (per>=0 && per<=32)
	{
		printf("you are failed");
	}
	else
	{
		printf("invalid subject marks ");
	}
 }
else 
{
	printf("percentage can not be negative");
}


