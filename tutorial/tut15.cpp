#include<stdio.h>
int main()
{

int a,b;

a=10;

//b= ++a + a++ + --a +--a  ;
//b= a++ + ++a + ++a + ++a  ;
//b= a-- + a-- + ++a + ++a  ;
b= ++a + a--;

printf(" %d",b);


}
