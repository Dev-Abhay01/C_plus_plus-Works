//wap to demonstrate the use of pointer
#include<stdio.h>
int main()
{int n,*p;
printf("enter value of n: ");
scanf("%d",&n);
p=&n;
printf("value of pointer variable is : %d\n",p);
printf("value stored on address is :%d ",*p);
}
