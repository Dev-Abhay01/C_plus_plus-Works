#include<stdio.h>
int update(int n1,int n2);
int main()
{
	int a,b;
	printf("enter two value :");
	scanf("%d%d",&a,&b);
	update(a,b);
	printf("a =%d , b=%d \n",a,b);	
}
int update(int n1,int n2)
 {	n1=n1+10;
 	n2=n2+10;
 	printf("n1=%d , n2=%d\n",n1,n2);
 }
 
