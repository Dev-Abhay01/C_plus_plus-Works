//sum of all prime 
#include<stdio.h>
int main()
{
	int i,j,count=0,n=0,sum=0;
//	printf("enter a number: ");
//	scanf("%d",&num);
 for (i=1;i<=50;i++)
 { 
 count=0;
 for(j=1;j<=i;j++)
 
 {
	if(i%j==0)
 	count=count+1;
 }
 if(count==2)
 sum=sum+i;
}
printf("total number are prime number=%d",sum);
}

