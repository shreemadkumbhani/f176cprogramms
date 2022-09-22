#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
	printf("Enter a number :");
	scanf("%d",&a);
	printf("Your number is :%d",a);

	if(a%2==0)
	{
	printf("\n%d is an Even number.");
	}
getch();
}