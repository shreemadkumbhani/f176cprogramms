#include<stdio.h>
#include<conio.h>
void main()
{	//ternery operator  maximum for 3 number
int a=8,b=4,c=9,max;
clrscr();
	max=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("%d",max);

getch();
}