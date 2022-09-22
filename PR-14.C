#include<stdio.h>
#include<conio.h>
void main()
{
int m;
clrscr();
//even or odd
	printf("Enter a number :");
	scanf("%d",&m);
	printf("Your number is :%d",m);

	if(m%2==0)
	{
	printf("\n%d is an Even number.");
	}
	else
	{
	printf("\n%d is an Odd number.");
	}
getch();
}
