#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z=6;

clrscr();
	printf("Enter value of x ");
	scanf("%d",&x);
	printf("Enter value of y");
	scanf("%d",&y);
	x+=y;
	printf("%d is new x\n",x);
	x-=y;
	printf("%d is new x\n",x);
	x*=y;
	printf("%d is new x\n",x);
	x/=y;
	printf("%d is new x\n",x);
	x%=y;
	printf("%d is new x\n",x);


getch();
}