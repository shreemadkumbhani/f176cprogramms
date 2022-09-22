#include<stdio.h>
#include<conio.h>
void main()
{
int bs,HRA,DA,TA,gs;
clrscr();
	printf("Enter Base Salery :");
	scanf("%d",&bs);
	HRA=(bs*10)/100;
	printf("The value of HRA is :%d\n",HRA);
	DA=(bs*5)/100;
	printf("The value of DA is :%d\n",DA);
	TA=(bs*8)/100;
	printf("The value of TA is :%d\n",TA);
	gs=bs+HRA+DA+TA;
	printf("The Gross Salery is :%d",gs);
getch();
}
