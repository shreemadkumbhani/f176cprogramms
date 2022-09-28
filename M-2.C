#include<stdio.h>
#include<conio.h>
void main()
{             //Momentum - print even or odd using turnery operator
int x;
clrscr();
	printf("Enter a number to check if it is even or not :");
	scanf("%d",&x);
	(x%2==0)?printf("\nEven"):printf("\nOdd");
getch();
}