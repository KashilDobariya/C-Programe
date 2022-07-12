#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	int *p,**pp;
	clrscr();
	printf("\n Value of a is %d",a);
	printf("\n Address of a is %u",&a);
	p=&a;
	pp=&p;
	printf("\n Value of a using of p is %d",*p);
	printf("\n Address of a is %u",&p);
	printf("\n Address of a using of p is %u",&a);
	printf("\n");
	printf("\n Value of p using of double pointer %d",**pp);
	printf("\n Address of double pointer %u",&pp);
	printf("\n Address of a using double pointer %u",pp);
	printf("\n Address of pointer using double pointer %u",*pp);
	getch();
}