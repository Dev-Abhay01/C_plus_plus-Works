#include<stdio.h>
int main ()
{
   char alpha;
	printf("Enter a character: ");
	scanf("%c",&alpha);
	if (alpha>='a' && alpha<='z')
	{
		printf("character is : %c",alpha);	
	}
	else{
		printf("character is not a alphabate");
	}
}
