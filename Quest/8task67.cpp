//wap to input your name and check a length of your name
#include<stdio.h>  
int main()
{
    char name[1000];
    int i;
  
    printf("Enter your name: ");
    scanf("%s", name);
  
    for (i = 0; name[i] != '\0'; ++i);
  
    printf("Length of the  name is %d", i);
  
}
