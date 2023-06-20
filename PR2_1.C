#include<stdio.h>
#include<conio.h>
void main()
{
int Number;
clrscr();

printf("Enter any number to check is it odd or Even:");
scanf ("%d",&Number);
Number%2==0 ? printf("Given number is Even") : printf("Given number is Odd");

getch();
}