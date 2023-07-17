#include <stdio.h>
int main()
{
int n,sum;
printf("enter the three digit number");
scanf("%d",&n);
sum = n%10 + (n/10)%10 + (n/100);
printf("the sum of three digit number is=%d",sum);
}
