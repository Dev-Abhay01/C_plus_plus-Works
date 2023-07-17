#include<stdio.h>
int main()
{
	int mi,ai,total;
	printf("enter monthly income of your father :");
	scanf("%d",&mi);
	ai=mi*12;
	total=ai+(ai*10)/100;
	printf("total income= %d",total);
	//(mi*12)+((mi*12*10)/100);
	//printf("annual income of father =%d",ai);
}
