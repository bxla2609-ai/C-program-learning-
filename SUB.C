#include <stdio.h>
#include <conio.h>

void main()
{
int num1,num2,sub;

clrscr();

 printf("income per month:");
 scanf("%d", &num1);

 printf("expenses per month:");
 scanf("%d", &num2);

 sub=num1-num2;

 printf("The subraction of %d and %d is %d",num1,num2,sub);

 getch();
 }