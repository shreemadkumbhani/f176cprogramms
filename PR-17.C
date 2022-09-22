#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
	//Minimum and maximum
	printf("Enter number for a :");
	scanf("%d",&a);
	printf("Enter number for b :");
	scanf("%d",&b);
	if(a<b)
	{
	printf("%d is a Minimum number.",a);
	}
	else
	{
	printf("%d is a Maximum number.",b);
	}


getch();
}