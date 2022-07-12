#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\nenter value a:");
	scanf("%d",&a);
	printf("\nenter value b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\nvalue of a:%d",a);
	printf("\nvalue of b:%d",b);
	getch();

}
