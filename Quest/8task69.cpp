//wap to input name from users and check words in name
#include<stdio.h>
int main()
{
	char name[30];
	printf("Enter your name : ");
	//scanf("%s",&name);
	//print("Hello %s",name);
	gets(name);
	//printf("Hello %s",name);
	//puts(name);
	printf("first index of name is |%c \n",name[0]);
	printf("second index of name is|%c \n",name[1]);
	printf("third index of name is |%c \n",name[2]);
	printf("fourth index of name is|%c \n",name[3]);
	printf("fifth index of name is |%c \n",name[4]);
	printf("sixth index of name is |%c \n",name[5]);
	printf("seaven index of name is|%c \n",name[6]);

}
