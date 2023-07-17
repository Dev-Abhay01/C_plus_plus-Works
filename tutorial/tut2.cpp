//wap to convert given meters into km and meters
#include<stdio.h>
int main()
{
  int m,Km;
  printf("Enter total meters: " );
  scanf("%d",&m);
  Km=m/1000;
  printf("total kilometers=%d",Km);
  m=m-(Km*1000);
  printf("total meters=%d",m);
}
   
