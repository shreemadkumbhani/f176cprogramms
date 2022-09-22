#include<stdio.h>
#include<conio.h>
void main()
{             //maximum num fron 5 numbers
int a,b,c,d,e;
clrscr();
	printf("\nEnter Value of A :");
	scanf("%d",&a);
	printf("\nEnter Value of B :");
	scanf("%d",&b);
	printf("\nEnter Value of C :");
	scanf("%d",&c);
	printf("\nEnter Value of D :");
	scanf("%d",&d);
	printf("\nEnter Value of E :");
	scanf("%d",&e);
	printf("\nThe Maximum num is :");
	if(a>b && a>c && a>d && a>e)
	{
	printf("a");
	}
	else if(b>c && b>d && b>e)
	{
	printf("b");
	}
	else if(c>d && c>e)
	{
	printf("c");
	}
	else if(d>e)
	{
	printf("d");
	}
	else
	{
	printf("e");
	}
getch();
}