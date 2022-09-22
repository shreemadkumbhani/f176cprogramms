#include<stdio.h>
#include<conio.h>
void main()
{
int m1,m2,m3,m4,m5;
float per;

clrscr();
	printf("Enter marks of Mathematics - ");
	scanf("%d",&m1);
	printf("Enter marks of Biology - ");
	scanf("%d",&m2);
	printf("Enter marks of English - ");
	scanf("%d",&m3);
	printf("Enter marks of Physics - ");
	scanf("%d",&m4);
	printf("Enter marks of Chemistry - ");
	scanf("%d",&m5);

	per=((float)m1+(float)m2+(float)m3+(float)m4+(float)m5)/5;
	printf("\n\nPercentage is %f",per);

getch();
}