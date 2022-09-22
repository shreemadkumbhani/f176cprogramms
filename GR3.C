#include<stdio.h>
#include<conio.h>
void main()
{
float c,f;
clrscr();
	printf("Enter value in Celcius to convert :");
	scanf("%f",&c);
	f=(c*1.8)+32;
	printf("\nYour Answer in Fahrenheit is :%.2f",f);
getch();
}

