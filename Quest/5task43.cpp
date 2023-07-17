//wap to print all numbers that is divisible by 3 and 5 both within 4 to n
#include<stdio.h>
int main()
{
	int i=4,n=300;
	while(i<=n)
	{
		if(i%3==0 && i%5==0)
		{
			printf("%d\n",i);
			
		}
		i=i+1;
	}
}
