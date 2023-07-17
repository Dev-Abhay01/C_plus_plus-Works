//wap to input nme of the user and print name with hello
//wap to i/p a name and print all character on new line
#include<stdio.h>
int main()
{
	char name[30],address[100];
	printf("Enter your name : ");
	//scanf("%s",&name);
	//print("Hello %s",name);
	gets(name);
	//printf("Hello %s",name);
	//puts(name);
	printf("first index of name is %c \n",name[0]);
	printf("second index of name is %c \n",name[1]);
	printf("third index of name is %c \n",name[2]);
}
