#include<stdio.h>
#include<conio.h>
void main()
{
int d;
clrscr();
	printf("Enter the age to check :");
	scanf("%d",&d);
	if(18<=d)
	{
	printf("Adult");
	}
	else
	{
	printf("Child");
	}
getch();
}