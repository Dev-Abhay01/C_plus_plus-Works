#include<stdio.h>
int main( )
{
int a;
printf("enter the value: ");
scanf("%d",&a);
printf("\n hours:%d",(a/60));
printf("\n minute:%d",(a%60));
}
