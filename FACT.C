#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}
void main()
{
	clrscr();
	printf("\n Factorial : %d",fact(5));
	getch();
}