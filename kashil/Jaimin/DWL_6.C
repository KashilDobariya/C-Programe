#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	i=1;
	do
	{
		if(i%2)
		printf(" %d\t",++i);
		i++;
	}while(i<=50);
	getch();
}