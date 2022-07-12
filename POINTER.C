#include<stdio.h>
#include<conio.h>
void main()
{
	int a=20;
	int *p;
	clrscr();
	printf("\n Value of a is %d",a);
	printf("\n Address of a is %u",&a);
	p=&a;
	printf("\n Value of a using of p is %d",*p);
	printf("\n Address of a is %u",&p);
	printf("\n Address of a using of p is %u",&a);
	getch();
}