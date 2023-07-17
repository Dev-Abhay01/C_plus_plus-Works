#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("enter the values: ");
	scanf("%d%d%d , &n1,&n2 ,&n3");
	
	if (n1>n2 && n1>n3)
	{printf("%d is the greatest number",n1);
    }  
	else if ( n2>n1 && n2>n3)
	 {
	printf("%d is the greatest number",n2);
	
	}
	else if (n3>n1 && n3>n2)
	{
	printf("%d is the greatest number ",n3);
    }
	else
	{
    printf( "some values are equal");
	}

}
