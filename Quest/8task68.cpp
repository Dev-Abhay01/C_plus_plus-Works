//wap to ask user for the name and check it is valid name or not
#include<stdio.h>  
int main()
{
    char ch;
    int i;
  
    printf("Enter your name: ");
    scanf("%s",&ch);
  {
  if(ch>='A' && ch<='Z')
  printf("your name is valid");
  else
  printf("your name is invalid");
}
}
