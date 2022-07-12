#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=20;
	int *p,*c,d;
	clrscr();
	printf("\n Value of a is %d",a);
	printf("\n Address of a is %u",&a);
	printf("\n Value of b is %d",b);
	printf("\n Address of b is %u",&b);
	p=&a;
	c=&b;
	d=*c;
	*c=*p;
	*p=d;
	printf("\n Value of a is %d",a);
	printf("\n Address of a is %u",&a);
	printf("\n Value of b is %d",b);
	printf("\n Address of b is %u",&b);
	getch();
}