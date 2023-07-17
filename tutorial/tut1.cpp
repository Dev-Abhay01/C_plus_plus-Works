#include<stdio.h>
int main()
{
  int min,h;
  printf("enter total: ");
  scanf("%d",&min); 
  h=min/60; 
  printf("total hours=%d",h);
  min=min-(h*60); 
  printf("\nremaining minutes = %d",min);
}
