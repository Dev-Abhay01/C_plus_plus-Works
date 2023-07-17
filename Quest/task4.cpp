#include <stdio.h>
int main( )
{
int p,t,r,si;
printf("enter the values,principle-Amount,time,rate");
scanf("%d%d%d",&p,&t,&r);
si= (p * t * r) / 100;
printf("\n simple interest =%d",si);
}
