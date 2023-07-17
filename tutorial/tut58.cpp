#include<stdio.h>
int main()
{
	int n1,n2;
	printf("enter two  numbers: ");
	scanf("%d%d", &n1,&n2);
	//printf("%d",n1>n2 && n1>10);
	printf("%d",n1>n2 || n1>10 );
	//printf("%d",!(n1>n2 || n1>10) );
}
