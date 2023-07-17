#include<stdio.h>
int main()
{
	float c;
	printf("enter centigrate value to convert into farenhite:" );
	scanf("%f",&c);
	printf("farenhite=%f",(c*1.8+32));
	if(c<20)
	{
	printf("\n its very cold ",c);
}
	else
	{
		printf("\n its very very hot!!!!",c);
	}
}
