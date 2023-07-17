//wap for email in the correct way @ comes first then . comes
#include<stdio.h>
int main()
{
	int i,j,count=0,dot=0,posat,posdot; //len=0
	char email[30];
	printf("Enter your email : ");
	gets(email);     //@,., for one time only 
	for(i=0;email[i]!='\0';i++)
{
  if(email[i]=='@')
 count=count+1;
 posat=i;
 
 else if(email[i]=='.')
 dot=dot+1;
 posdot=i;
}
   if(count==1 && dot==1)
   printf("it is a valid email id " );
   else                           //len=len+1
   printf("it is not a valid email id ");
}

