#include <stdio.h>
#include <conio.h>

void main()
{
char name[20];
int age;
float height;
char grade;

clrscr();

printf("Enter your name: ");
scanf("%s", name);

printf("Enter your age: ");
scanf("%d",  &age);

printf("Enter your height: ");
scanf("%f", &height);

printf("Enter your grade: ");
scanf(" %c", &grade);

printf("\n----- Student Details -----\n");
printf("Name   = %s\n", name);
printf("Age    = %d\n", age);
printf("Height = %.1f\n", height);
printf("Grade  = %c\n", grade);

getch();
}