#include<conio.h>
#include<stdio.h>
void main()
{        //For loop multiplicative table
int a,x;
clrscr();
	printf("Enter num to print the table :");
	scanf("%d",&x);
	for(a=1;a<=10;a++)
	{
	printf("%d*%d=%d\n",x,a,x*a);
	}

getch();
}