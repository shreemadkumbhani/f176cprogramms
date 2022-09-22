#include<stdio.h>
#include<conio.h>
void main()
{            //Switch Case for days of week
char x;
clrscr();
	printf("Chose from the following to be printed.\n");
	printf("M,T,W,H,F,S,U");
	printf("\nEnter a cherecter :");
	scanf("%c",&x);
	switch (x)
	{
	case 'm':
		printf("MONDAY");
		break;
	case 't':
		printf("TUESDAY");
		break;
	case 'w':
		printf("WEDNESDAY");
		break;
	case 'h':
		printf("THURSDAY");
		break;
	case 'f':
		printf("FRIDAY");
		break;
	case 's':
		printf("SATURDAY");
		break;
	case 'u':
		printf("SUNDARY");
		break;
	default:
		printf("NO MATCH");
	}
getch();
}
