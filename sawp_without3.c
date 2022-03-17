#include<stdio.h>

int main()
{
int x,y;

printf("Enter value of x");
scanf("%d", &x);
printf("Enter value of x");
scanf("%d", &x);

int temp=x;
x=y;
y=temp;



printf("\nAfter swapping :x=%d,y=%d", x,y);
return 0;
}