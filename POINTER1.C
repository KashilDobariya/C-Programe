#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=20;
	int *p;
	clrscr();
	printf("\n Value of a is %d",a);
	printf("\n Address of a is %u",&a);
	p=&b;
	printf("\n Value of a using b is %d",*p);
	printf("\n Address of b is %u",&p);
	printf("\n Address of a using b is %u",p);
	getch();
}