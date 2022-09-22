#include<stdio.h>
#include<conio.h>
void main()
{             //maximum num fron 4 numbers
int a,b,c,d;
clrscr();
	printf("\nEnter Value of A :");
	scanf("%d",&a);
	printf("\nEnter Value of B :");
	scanf("%d",&b);
	printf("\nEnter Value of C :");
	scanf("%d",&c);
	printf("\nEnter Value of D :");
	scanf("%d",&d);
	printf("\nThe Maximum num is :");
	if(a>b && a>c && a>d)
	{
	printf("a");
	}
	else if(b>c && b>d)
	{
	printf("b");
	}
	else if(c>d)
	{
	printf("c");
	}
	else
	{
	printf("d");
	}

getch();
}