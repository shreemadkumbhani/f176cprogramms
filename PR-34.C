#include<conio.h>
#include<stdio.h>
void main()
{        //1 to n sum with while loop
int a,n,sum=0;
clrscr();
	printf("Enter value to print until:");
	scanf("%d",&n);
	a=1;
	while(a<=n)
	{
	printf("\n%d",a);
	sum+=a;
	a++;
	}
	printf("\n%d is the sum",sum);

getch();
}