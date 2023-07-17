//wap to input email address and check it is valid email or not
#include<stdio.h>
int main()
{
	int i,count=0,dot=0; //len=0
	char email[40];
	printf("Enter your email : ");
	gets(email);     //@,., for one time only 
	for(i=0;email[i]!='\0';i++)
{
	
 if(email[i]=='@')
 count=count+1;
 else if(email[i]=='.')
 dot=dot+1;
}
   if(count==1 && dot==1)
   printf("it is a valid email id " );
   else                           //len=len+1
   printf("it is not a valid email id ");
}

