#include<stdio.h>
int main()
{
    int n,m;
	printf("enter your number:");
	scanf("%d",&n);
	m=n%3;
	m==0?printf("yes your number is divisible by 3"):printf ("no your number is not divisible by 3");
}
