#include<conio.h>
#include<stdio.h>
void main()
{        //N to 1 with while loop even
int a,n;
clrscr();
	printf("Enter value to print until:");
	scanf("%d",&n);
	a=1;
	while(n>=a)
	{	if(n%2==0)
		{
		printf("\n%d",n);
		}
	n--;
	}


getch();
}