#include<stdio.h>
int main ()
{
   char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	if (ch>='a' && ch<='z') 
	{
		ch=ch-32;
		printf("ascii value of character is : %d\n",ch);
	    printf("character is :%c\n",ch);
	}
   else if (ch>='A' && ch<='Z')
	{
	
		printf("character is already in uppercase");	
	}
	else
	{
		printf("character is not a alphabate");
	}
}
