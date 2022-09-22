#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,num3,max;
clrscr();
	printf("Enter num1 :");
	scanf("%d",&num1);
	printf("\nEnter num2 :");
	scanf("%d",&num2);
	printf("\nEnter num3 :");
	scanf("%d",&num3);

	if(num1>num2)
	{
		if(num1>num3)
		{
		max=num1;
		}
		else
		{
		max=num3;
		}
	}
	else
	{
		if(num2>num3)
		{
		max=num2;
		}
		else
		{
		max=num3;
		}
	}
	printf("Maximum among all three number :%d",max);

getch();
}