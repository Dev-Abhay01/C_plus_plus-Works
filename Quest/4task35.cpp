#include<stdio.h>
int main ()
{
   char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	if (ch>='a' && ch<='z') 
	{

	    printf("character is a alphabate :%c" ,ch);
	}
   else if (ch>='0' && ch<='9')
	{
	
		printf("character is digit");	
	}
	else
	{
		printf("character is a special symbol");
	}
}
