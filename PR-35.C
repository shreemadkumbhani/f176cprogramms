#include<conio.h>
#include<stdio.h>
void main()
{        //Factorial of 	n with while loop
int a,n,fact=1;
clrscr();
	printf("Enter value to print until:");
	scanf("%d",&n);
	a=1;
	while(a<=n)
	{
	fact=fact*a;
	a++;
	}
	printf("Factorial of %d is :%d",n,fact);

getch();
}