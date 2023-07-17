#include<stdio.h>
int main()
{
	float per,t,n;
	printf("enter total marks:" );
	scanf("%f",&t);
	printf("enter your marks:" );
	scanf("%f",&n);
	per=(n/t)*100;
	printf("percentage=%f",per);
}
