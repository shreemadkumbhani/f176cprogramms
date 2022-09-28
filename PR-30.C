#include<conio.h>
#include<stdio.h>
void main()
{        //N to 1 with while loop
int a,n;
clrscr();
	printf("Enter value to print until:");
	scanf("%d",&n);
	a=1;
	while(n>=a)
	{
	printf("\n%d",n);
	n--;
	}


getch();
}