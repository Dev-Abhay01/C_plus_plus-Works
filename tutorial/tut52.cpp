#include<stdio.h>
int main()
{
	int i,j,count=0;
	//printf("enter a number: ");
	//scanf("%d",&num);
 for (i=2;i<=50;i++)
 { 
 count=0;
 for(j=1;j<=i;j++)
 
 {
	if(i%j==0)
 	count=count+1;
 }
 if(count==2)
 printf("%d is a prime number\n",i);
}
}


