#include<stdio.h>
int main ()
{
   char alpha;
	printf("Enter a character: ");
	scanf("%c",&alpha);
	if ((alpha>='a' && alpha<=122) || (alpha>='A' && alpha<='Z'))
	{
		printf("character is : %c",alpha);	
	}
	else
	{
		printf("character is not a alphabate");
	}
}
