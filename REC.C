#include<stdio.h>
#include<conio.h>
void rec(int n)
{
	printf("Winding phase : Level = %d\n",n);
	if(n<3)
	{
		rec(n+1);
	}
	printf("Unwinding phase : Level = %d\n",n);
}
void main()
{
	clrscr();
	rec(1);
	getch();
}