#include <stdio.h>
#include <conio.h>

void main()
{
float radius,area;

clrscr();

printf("Enter the radius of the circle: ");
scanf("%f", &radius);

area = 3.14*radius*radius;

printf("\nArea of the circle = %.2f",area);
getch();
}