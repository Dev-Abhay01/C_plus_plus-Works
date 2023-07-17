//wap to print all values where remainder is 3 when divided by 4 with in n to 50
#include<stdio.h>
int main()
{
	int i=1;
	while(i<=50)
	{
		if(i%4==3)
		{
			printf("%d\n",i);
			
		}
		i=i+1;
	}
}
