#include <stdio.h>
#include <conio.h>

void main()
{
int num1,num2,mul;

clrscr();

printf("Enter the first integer:");
scanf("%d", &num1);

printf("Enter the second integer:");
scanf("%d", &num2);

mul=num1 * num2;

printf("the multiplicaton of the %d and %d is : %d",num1,num2,mul);

getch();
}