//programm to check a nuber is even or odd by using switch
#include<stdio.h>
int main()
{
	int num;
	printf("enter a number: ");
	scanf("%d",&num);
	switch(num%2)
	{
		case 0 :
		printf("number is a even number");
	    break;
	    case 1:
	    printf("number is a even number");
	    break;
	}
}
