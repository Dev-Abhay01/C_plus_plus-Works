//wap to print all number which last digit is 3 with in 3 to n 
#include<stdio.h>

int main()

{
	int num,digit;
	printf("Enter a number:");
	scanf("%d",&num);

	digit=num%10;
	printf("Last digit: %d",digit);
    

}
