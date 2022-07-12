#include<stdio.h>
#include<conio.h>
int add(int n)
{
	if(n==0)
		return 0;
	else
		return n+add(n-1);
}
void main()
{
	clrscr();
	printf("\n Additional : %d",add(10));
	getch();
}