#include<stdio.h>
#include<conio.h>
void main()
{

int a,b,sum,sub,mul,div,mod;

clrscr();
	printf("enter value of a ");
	scanf("%d",&a);
	printf("enter value of b ");
	scanf("%d",&b);
	sum=a+b;
	printf("\n\nsum of  a & b is %d\n",sum);
	sub=a-b;
	printf("subtraction of a & b is %d\n",sub);
	mul=a*b;
	printf("multiplication of a & b is %d\n",mul);
	div=a/b;
	printf("division of a & b is %d\n",div);
	mod=a%b;
	printf("modules of a & b is %d\n",mod);

getch();
}