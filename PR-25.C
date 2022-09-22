#include<stdio.h>
#include<conio.h>
void main()
{             //Switch case for printing name of months
char x;
clrscr();
	printf("Chose from the following to be printed.\n");
	printf("J,F,M,A,C,U,Y,W,S,O,N,D");
	printf("\nEnter a cherecter :");
	scanf("%c",&x);
	switch (x)
	{
	case 'j':
		printf("JANUARY");
		break;
	case 'f':
		printf("FEBRUARY");
		break;
	case 'm':
		printf("MARCH");
		break;
	case 'a':
		printf("APRIL");
		break;
	case 'c':
		printf("MAY");
		break;
	case 'u':
		printf("JUNE");
		break;
	case 'y':
		printf("JULY");
		break;
	case 'w':
		printf("AUGUST");
		break;
	case 's':
		printf("SEPTEMBER");
		break;
	case 'o':
		printf("OCTOBER");
		break;
	case 'n':
		printf("NOVEMBER");
		break;
	case 'd':
		printf("DECEMBER");
		break;
	default:
		printf("NO MATCH");
		break;
	}
getch();
}