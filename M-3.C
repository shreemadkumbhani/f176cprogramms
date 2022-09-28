#include<stdio.h>
#include<conio.h>
void main()
{             //maximum num fron 4 numbers
int a,b,c,d,max;
clrscr();
	printf("\nEnter Value of A :");
	scanf("%d",&a);
	printf("\nEnter Value of B :");
	scanf("%d",&b);
	printf("\nEnter Value of C :");
	scanf("%d",&c);
	printf("\nEnter Value of D :");
	scanf("%d",&d);
	if (a>b)
	{
		if (a>c)
		{
			if(a>d)
			{
			max=a;
			}
			else
			{
			max=d;
			}
		}
		else
		{
			if(c>d)
			{
			max=c;
			}
			else
			{
			max=d;
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
			max=b;
			}
			else
			{
			max=d;
			}
		}
		else
		{
			if(c>d)
			{
			max=c;
			}
			else
			{
			max=d;
			}
		 }
	}
	printf("\nThe maximum num is :%d",max);
getch();
}