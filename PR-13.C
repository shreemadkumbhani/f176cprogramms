#include<stdio.h>
#include<conio.h>
void main()
{
int a;

clrscr();
       printf("Enter the value to pre increment ");
       scanf("%d",&a);
       ++a;
       printf("\nThe pre increment value is %d\n",a);

       printf("\nEnter the value to post increment ");
       scanf("%d",&a);
       a++;
       printf("\nThe post increment value is %d\n",a);

       printf("\nEnter the value to pre decrement ");
       scanf("%d",&a);
       --a;
       printf("\nThe pre decrement value is %d\n",a);

       printf("\nEnter the value to post decrement ");
       scanf("%d",&a);
       a--;
       printf("\nThe post decrement value is %d\n",a);

getch();
}