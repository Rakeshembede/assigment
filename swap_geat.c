#include<stdio.h>
#include<conio.h>
int main()
{
int x=6,y=4;

x=x^y;
y=x^y;
x=x^y;

printf("After swapping :x=%d,y=%d", x,y);
return 0;
}