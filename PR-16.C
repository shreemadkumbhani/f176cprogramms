#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
	printf("Enter a number :");
	scanf("%d",&x);
	printf("Your number is :%d",x);

	if(x%2!=0)
	{
	printf("\n%d is an Odd number.");
	}
getch();
}