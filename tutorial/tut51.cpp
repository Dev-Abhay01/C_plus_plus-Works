//wap to input 1 number from user and check it is prime or not
#include<stdio.h>
int main()
{
	int i,num,count=0;
	printf("enter a number: ");
	scanf("%d",&num);
 for (i=1;i<=num;i++)
 {
 	if(num%i==0)
 	count=count+1;
 }
 if(count==2)
 printf("Numbers is a prime number");
 else
 printf("Number is not a prime number");
}
